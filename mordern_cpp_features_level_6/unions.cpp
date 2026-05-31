#include <iostream>

union data {
    int number;
    // std::string datanumber; this is creating problems
    // cuz historically union was maded for simple data types
    int number2;
};
int main() {
    data Xiaomi;
    Xiaomi.number=12;
    Xiaomi.number2=454152;    

    std::cout<< Xiaomi.number<<std::endl;
    std::cout<< Xiaomi.number2 << "  this is number 2"<<std::endl;
}