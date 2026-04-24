#include <iostream>
// let's learn the pass by value concept
void SetValue(int arg) {
    arg=90000;
}
int main() {
    int x=42;
    std::cout<<"x's value is: "  <<x <<std::endl;
    std::cout<< "x's adress is: "<<&x <<std::endl;
    SetValue(x);
    std::cout<< "x's value is: "<<x <<std::endl;
    std::cout<<"x's adress is: " <<&x <<std::endl;
}
