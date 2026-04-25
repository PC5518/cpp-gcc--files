#include <iostream>
int main() {
    std::string x="deva";
    std::string y="aditya";
    std::string temp=x;
    std::string temp2=y;
    x=temp2;
    y=temp;
    std::cout<<"x: " <<temp2 <<std::endl;
    std::cout<<"y: "<<temp << std::endl;
}