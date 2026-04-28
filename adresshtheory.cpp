#include <iostream>
int main() {
    int deva =  39;
    auto aditya = (void*)&deva; // it means adress only store karna type mat dekhna
    
    std::cout<<aditya;
}