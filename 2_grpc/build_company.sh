
rm -rf  company.pb.* 
rm -rf company.grpc.* 

protoc -I protos --grpc_out=./ --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` ./protos/company.proto
protoc -I protos --cpp_out=./ ./protos/company.proto


#clang++ -std=c++11 -o server -lgrpc++ -lprotobuf -lpthread -lgrpc++_reflection company.pb.cc company.grpc.pb.cc company_server.cc
#clang++ -std=c++11 -o client -lgrpc++ -lprotobuf -lpthread -lgrpc++_reflection company.pb.cc company.grpc.pb.cc company_client.cc


#g++ -std=c++11 -g -O0  -o server -lgrpc++ -lprotobuf -lpthread -lgrpc++_reflection company.pb.cc company.grpc.pb.cc company_server.cc
#g++ -std=c++11  -g -O0    -o client -lgrpc++ -lprotobuf -lpthread -lgrpc++_reflection company.pb.cc company.grpc.pb.cc company_client.cc
