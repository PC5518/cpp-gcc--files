#include <iostream>
//   first question:  why a template??? 
// suppose i wrote a fxn 
int add(int a , int b)  {
    return a+b;
}
int main() {
    std::cout<<add(2,3) <<std::endl;
}
// now the problem is this what if i want to add a type of double???? 
// we will se in template2