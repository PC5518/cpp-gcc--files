#include <iostream>

int main() {
    int data=23;

    auto fxn  = [data](int a) {
        return  a*a;
    };
    std::cout<< fxn(data)<<std::endl;
    std::cout<< [](int x) {
        return x*8;
    }(8) <<std::endl;
}