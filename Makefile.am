ACLOCAL_AMFLAGS=-I m4
bin_PROGRAMS=TCPServer TCPClient
TCPServer_SOURCES=$(top_srcdir)/src/server.cpp
TCPServer_CPPFLAGS=-Wall\
				   -pthread
TCPServer_LDADD=-lpthread\
				-lboost_system

TCPClient_SOURCES=$(top_srcdir)/src/client.cpp
TCPClient_CPPFLAGS=-Wall\
				   -pthread
TCPClient_LDADD=-lpthread\
				-lboost_system
