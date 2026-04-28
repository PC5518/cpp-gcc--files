#include <iostream>
int main() {
    int deva= 89;
    // why only pointer me store karen ??
    //ans:-> value bhi chahiye naaa....
    auto *aditya = &deva;
    std::cout<<aditya <<std::endl;

    std::cout<<*aditya <<std::endl;
}


// (void*)&deva
// //  ↑     ↑
// // type  address