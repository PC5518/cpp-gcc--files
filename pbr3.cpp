#include <iostream>
void mathStats(int a, int b , int& sum, int& product, int& difference) {
    sum =a+b;
    product=a*b;
    difference=a-b;
}
int main() {
    int sum ;
    int product;
    int difference;

    std::cout<<sum <<std::endl;


    mathStats(12,55, sum, product, difference);
    std::cout<<sum <<std::endl;
    std::cout<<difference<<std::endl;
    std::cout<<product<<std::endl;
}