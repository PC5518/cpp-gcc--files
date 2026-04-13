#include <iostream>
int main () {
    try {
        std::cout<< "testing of try and catch happens" << std::endl;
    }
    catch (...) {
        std::cout<<" the code fails";
    }
}