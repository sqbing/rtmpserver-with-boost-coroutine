#include <iostream>
#include <string>
#include <boost/asio.hpp>
#include <time.h>

std::string make_daytime_string()
{
    time_t now = time(NULL);
    return ctime(&now);
}

int main(int argc, const char *argv[])
{
    try
    {
        boost::asio::io_service ios;
        boost::asio::ip::tcp::acceptor acceptor(ios, 
                boost::asio::ip::tcp::endpoint(boost::asio::ip::tcp::v4(), 
                                               65530));
        for(int i=0; i<2; i++)
        {
            boost::asio::ip::tcp::socket socket(ios);
            acceptor.accept(socket);
            std::string daytime_string = make_daytime_string();

            boost::system::error_code ignored_error;
            boost::asio::write(socket, 
                               boost::asio::buffer(daytime_string),
                               ignored_error);
        }
    }catch(std::exception &e)
    {
        std::cout<<e.what()<<std::endl;
    }
    return 0;
}
