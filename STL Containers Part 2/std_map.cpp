#include <iostream>
#include <map>
int main() {
    std::map<std::string, int > dictionary;
    dictionary["string"]=23;
    std::cout << dictionary["string"]<<std::endl;
    std::map<std::string, int> data{{"deva",79}, {"sangeeta",23},  {"deepak", 98}};
    std::cout<<data["deva"] <<std::endl;
    data["ashika"]=89;
    data["aditya"]=28;
    

}