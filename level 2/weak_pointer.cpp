#include <iostream>
#include <memory>
//  problem with shared pointer
int main() {
    auto a = std::make_shared<int>(10);
    auto b =  std::make_shared<int>(223);

    std::cout<< *a <<std::endl;
    std::cout<< *b <<std::endl;

    int deva =783;
    std::cout<<deva <<std::endl;
}