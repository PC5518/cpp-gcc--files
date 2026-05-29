#include <iostream>
template <typename... type >
//  FROM HERE WE START WITH THE ARGUMENT.
// Ye line:

// template <typename... type>

// compiler ko bol rahi hai:

// Bhai, ek type nahi.

// Types ka packet (pack) aa sakta hai.
void print(type... input_variable) {
    // write the fxn here
    std::cout<< input_variable<<std::endl;
} //  now the problem is that the compiler thinks and doubt but koan sa wala pehla wala yaa baad wala ??????
int main() {
    print(5);
}