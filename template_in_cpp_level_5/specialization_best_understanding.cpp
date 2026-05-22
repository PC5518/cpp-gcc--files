#include <iostream>
// we can get the intution of template by python:
// Conceptually, specialization is VERY similar to:

// if type(data) == int:
//     do_this()

// elif type(data) == str:
//     do_that()

// else:
//     generic_behavior()
template <typename type>
auto fxn(type value) {
    std::cout<<value << std::endl;
}
// now i want to add that if the particular value is a int then print like this:
template<>
auto fxn<std::string>(std::string value) {
    std::cout << "this is a string value"<<value <<std::endl;
}
int main() {
    std::cout<<fxn(std::string("hey there ")) <<std::endl;
}