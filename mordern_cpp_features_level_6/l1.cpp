#include <iostream>

int main() {
    int* var= new int(10);
    std::cout<<*var <<std::endl;
// this is just a normal pointer.
    auto pointer = std::make_unique<int>(1000);
    std::cout<< pointer<<std::endl;
}