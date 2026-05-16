#include <iostream>
// let's use  template to fix this problem  
// so first we tell the general fxn i.e what exactly the fxn is doing irrespective of the type.

template <typename type>
type fxn(type a, type b) {
    return a+b;
}
// ISME HO KYA RAHA HAI?
// Line 1
// template<typename T>

// Meaning:

// "T ek type hoga."

// T koi variable nahi hai.

// T represents:

// int
// double
// float
// string
// vehicle
// anythingv
int main() {
    std::cout<<fxn(2.23,3.0) <<std::endl;
    std::cout<<fxn(std::string("Aditya"),  std::string(" Narayan")) <<std::endl;
    // beatifull disaster . still in mordern c++ this ghost of ancient C remains there.
    // actually compiler is considering char in the deep machine level
    // that's wny it's not taking it a string;
    // don't forget we should do itin the upcoming days ofm how we will undersytand the concept of char very deeply 
}