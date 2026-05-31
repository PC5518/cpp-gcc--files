#include <iostream>

union data {
    int number;
    // std::string datanumber; this is creating problems
    // cuz historically union was maded for simple data types
    float number2;
};
int main() {
    data Xiaomi;
    Xiaomi.number=12;
    Xiaomi.number2=454152;    
// oh yeah type change ho rha hai gaur se dekhe toh ye compiler aese kar nahin sakta directly tradtional cpp me right ????/. this is the core issue ???/ with unions ????

    std::cout<< Xiaomi.number<<std::endl;
    std::cout<< Xiaomi.number2 << "  this is number 2"<<std::endl;
}