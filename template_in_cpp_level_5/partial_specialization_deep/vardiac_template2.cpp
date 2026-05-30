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
    ((std::cout<< input_variable<<std::endl), ...);
} //  now the problem is that the compiler thinks and doubt but koan sa wala pehla wala yaa baad wala ??????
// therefore it is required to expand the package therefore we use ... after the input_variable statement
int main() {
    print(5);
}
// actually the main issue is that even here compiler ko lagta hai pack of (1,22,5,0,"deva") so how can i print the pack which one exactky ?
