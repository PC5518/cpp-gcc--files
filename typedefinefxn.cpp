#include <iostream>
int add(int a, int b)  {
    return a+b;
}
int multiply(int a, int b) {
    return a*b;
}
// int main() {
//     // we use  typedefien whenever we want to make the fxn pointer clean 
//     int (*fp)(int, int)= add;
//     fp(1,2);
//     std::cout << fp(1,2) <<std::endl;
// } 
// Function pointers in C are used to store the address of a function, allowing for dynamic function calls at runtime, callbacks in asynchronous programming, and improved code flexibility. They enable polymorphism, reduce code duplication by passing behavior as data, and are essential for implementing jump tables (dispatch tables) and state machines.
int main() {
    // typedef ka kaam hai clean babana fp ko 
    typedef int (*operations)(int a , int b);
    operations f1=add;
    operations f2=multiply;
    
}