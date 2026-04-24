#include <iostream>
void foo() {
    // x=72
}
int main() {
    int x=42;
    float y=72;
    char a= 'a';
    signed char b='b';
    unsigned char c='c';
    std::cout << "x" << &x << std::endl;

    std::cout << "y: " << &y << std::endl;
    std::cout << "a: " << &a << std::endl;
    std::cout << "b: " << &b << std::endl;
    std::cout << "c: " << &c << std::endl;
    std::cout<< "x sizs is: "<< sizeof(x)<< std::endl;
    return 0;
}
// & = "give me the address of this variable"