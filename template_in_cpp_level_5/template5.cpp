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
    std::cout<<fxn("deva", "aditya") <<std::endl;
}