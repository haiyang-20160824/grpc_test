test:reader writer

reader:reader.cc protoMid
	g++   -std=c++11 -g -O0    reader.cc  lm.helloworld.pb.cc -o reader  `pkg-config --cflags --libs protobuf`

writer: writer.cc protoMid   
	g++  -std=c++11 -g -O0  writer.cc lm.helloworld.pb.cc -o writer  `pkg-config --cflags --libs protobuf`  
protoMid: lm.helloworld.proto
	protoc -I=. --cpp_out=. ./lm.helloworld.proto

clean:
	rm -f reader writer protoMid
	rm -f lm.helloworld.pb.cc lm.helloworld.pb.h
