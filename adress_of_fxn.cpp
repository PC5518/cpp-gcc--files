#include <iostream>
int fxn() {
    int deva =55;
    std::cout<<deva <<std::endl;
}
int main() {
    std::string deva ="aditya";
    std::cout<< deva<<std::endl;
    std::cout<< &deva<< std::endl;
    std::cout<< (void*)fxn << std::endl; // heey compiler stop trying to be smart and tell me the memory location
}
//  & ->  it's just a 