#include <iostream>
#include <memory>
int main() {
    auto b=std::make_shared<int>(10);
    auto c=b;
    std::cout<< c<< std::endl;
}