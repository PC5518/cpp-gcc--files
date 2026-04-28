#include <iostream>
int main() {
    int deva =  39;
    auto aditya = (void*)&deva; // it means adress only store karna type mat dekhna
    auto devansh= (int*)&deva;// compiler kom bata diya ki type hai int
    std::cout<<aditya<<std::endl;
    std::cout<<devansh<<std::endl;
}