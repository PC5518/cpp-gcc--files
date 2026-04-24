#include <iostream>
int main() {
    int x=748;
    int& ref =x;
    std::cout<<"x's value is " << x<<std::endl;
    std::cout<<"x's adress is " << &x<<std::endl;


    std::cout<<"X's adress is " << ref<<std::endl;
    std::cout<<"x's adress is " << &ref
    <<std::endl;
}