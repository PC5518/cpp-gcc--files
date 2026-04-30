#include <iostream>
int main() {
    // Pitfall 1 - Wild pointer
    int *p =nullptr;
    std::cout<<p <<std::endl;
}
