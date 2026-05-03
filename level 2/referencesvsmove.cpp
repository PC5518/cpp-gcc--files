#include <iostream>
int main() {
    int deva=234;
    int& aditya =deva;
    std::cout<< (void*)&aditya<<std::endl;
    std::cout<< (void*)&deva<<std::endl;
}// full access over 