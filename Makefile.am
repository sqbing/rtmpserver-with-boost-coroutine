ACLOCAL_AMFLAGS=-I m4
bin_PROGRAMS=TCPServer TCPClient
TCPServer_SOURCES=$(top_srcdir)/src/server.cpp
TCPServer_CPPFLAGS=-Wall\
				   -pthread
TCPServer_LDADD=-L$(LIBBOOST_DIR)\
				-lpthread\
				-lboost_system

TCPClient_SOURCES=$(top_srcdir)/src/client.cpp
TCPClient_CPPFLAGS=-Wall\
				   -pthread
TCPClient_LDADD=-lpthread\
				-L$(LIBBOOST_DIR)\
				-lboost_system
