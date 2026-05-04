#include <iostream>
#include <memory>
int main() {
    // with normal poimter after use you can delete it but still there's adress remains therefore memory remains.
    // with unique ptr we can we can use it and shred it completely via .reset()
    auto p = std::make_unique<int>(10);
    std::cout<< &p <<std::endl;
}