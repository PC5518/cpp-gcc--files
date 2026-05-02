#include <iostream>
int add(int a , int b) {
    return  a+b;
}
int main() {
    std::cout<<(void*)&add<<std::endl;
}
// therefore fxn also has a adress