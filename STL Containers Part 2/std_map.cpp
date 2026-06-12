#include <iostream>
#include <map>
int main() {
    std::map<std::string, int > dictionary;
    dictionary["string"]=23;
    std::cout << dictionary["string"];

}