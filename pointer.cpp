#include <iostream>
int main() {
    int deva= 89;
    // why only pointer me store karen ??
    //ans:-> value bhi chahiye naaa....
    auto *aditya = &deva;
    std::cout<<aditya <<std::endl;

    std::cout<<*aditya <<std::endl;
}
// we use pointers to get the value plus adress
// basically it's an variable which stores address;
// can aslo be accessed if it's getting 

// (void*)&deva
// //  ↑     ↑
// // type  address