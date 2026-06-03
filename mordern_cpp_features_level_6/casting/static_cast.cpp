#include <iostream>
int main() {
    // static_cast c++ ka safe and explicity version hai for conversion
    double pi= 3.14;
    int integer= static_cast<int>(pi); 
    // note: static cast is not a predefined fxn of the standard library.
// ->    it's an built in operator.like if else while sizeof return 
    std::cout<<integer <<std::endl;
}
// casting means type conversions. 