#include <iostream>
int main() {
    std::string x="deva";
    std::string y="aditya";
    std::string temp=x;
    x=y;
    y=temp;
    std::cout<<"x is "<<x << std::endl;
    std::cout<<"y is "<<y << std::endl;
}
// this was manually through storing a data in another variable for temporary purpose
