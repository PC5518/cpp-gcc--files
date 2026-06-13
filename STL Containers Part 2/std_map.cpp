#include <iostream>
#include <map>
int main() {
    std::map<std::string, int > dictionary;
    dictionary["string"]=23;
    std::cout << dictionary["string"]<<std::endl;
    std::cout<< "****************************"<<std::endl;
    std::map<std::string, int> data{{"deva",79}, {"sangeeta",23},  {"deepak", 98}};
    std::cout<<data["deva"] <<std::endl;
    std::cout<< "****************************"<<std::endl;
    data.insert({"data",45}); // another way to insert key and value
    data["ashika"]=89;
    data["aditya"]=28;
    data.find("aditya");
    for (const auto& i: data) {
        std::cout << i.first<< " : " << i.second<<std::endl;
    }
    // internally each of the entry is in std::pair<const std::string, pair>
}
// here (aditya, 28) is a node which stores a pair. therefore each node stores a pair.
// Balanced Tree

// Each node stores a pair(key,value)