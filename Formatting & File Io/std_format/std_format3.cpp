#include <iostream>
#include <format>
int main() {
    int age =234 ;
    std::string data=  std::format( "{:>10}", age);
    std::cout<< data<<std::endl;
// +----------+
// |          |   ← Width = 10
// +----------+
// now since thr argument of age is of length 3 it will calculate like:  first 7 spaces empty anf then rest 3 for it

    std::string data2=  std::format( "{:^10}", age);
    std::cout<< data2<<std::endl;
}