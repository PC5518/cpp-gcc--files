#include <iostream>
int add(int a, int b) {
    return a+b;
}
int multiply(int a,int b) {
    return a*b;
}
int main() {
    int (*fp)(int, int)  ; // note:: fp is not predefined
    char op;
    std::cout<< "Enter the operaion you want to perform" <<std::endl;
    std::cin>> op;
    if (op == '+') {
        fp=add;// agar + aya toh ye absorb kar lega
    } else {
        fp =multiply;
    }
    std::cout<<fp(3,5) <<std::endl;
}