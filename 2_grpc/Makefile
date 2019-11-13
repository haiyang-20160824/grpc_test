subdir = ./

export PKG_CONFIG_PATH=/usr/local/lib/pkgconfig

SOURCES = $(wildcard $(subdir)*.cc)
SRCOBJS = $(patsubst %.cc,%.o,$(SOURCES))
#CC = g++
CC = /usr/bin/g++ 

%.o:%.cc
	$(CC) -std=c++11 -I/usr/local/include -pthread -c $< -o $@

all: client server

client:	 company.grpc.pb.o company.pb.o company_client.o
	$(CC) -std=c++11 $^    -L/usr/local/lib `pkg-config --libs grpc++ grpc` -Wl,--no-as-needed  -I/home/caros/baidu/adu-3rd/eigen3/include/   -lgrpc++_reflection -Wl,--as-needed -lprotobuf -lpthread -ldl -lssl -o $@

server:	company.grpc.pb.o company.pb.o company_server.o
	$(CC)  -std=c++11  $^ -L/usr/local/lib `pkg-config --libs grpc++ grpc` -Wl,--no-as-needed -I/home/caros/baidu/adu-3rd/eigen3/include/ -lgrpc++_reflection -Wl,--as-needed -lprotobuf -lpthread -ldl -lssl -o $@
#chmod 777 $@

clean:
	sudo rm *.o



