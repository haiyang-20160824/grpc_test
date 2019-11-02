
protoc --cpp_out=./ examples.proto  
protoc --grpc_out=./ --plugin=protoc-gen-grpc=/home/caros/baidu/adu-3rd/grpc/bin/grpc_cpp_plugin examples.proto

