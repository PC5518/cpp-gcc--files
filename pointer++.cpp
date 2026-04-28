#include <iostream>

int main() {
    int arr[]= {1,2,3,45,8,2};
    auto *p= &arr; // arr ke pahle element ka adress hai
    std::cout<< p<<std::endl;
}