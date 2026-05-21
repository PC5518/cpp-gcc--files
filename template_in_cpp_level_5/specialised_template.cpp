#include <iostream>
// now let's explicitly create our own custom version for some datatype
template<typename type>
auto fxn(type input ) {
    std::cout<<input <<std::endl;
}
template<>
auto fxn<std::string> (std::string input) {
    std::cout<< "special string: " <<input  <<std::endl;
}
int main() {
    fxn(2.5);
    fxn(2.4);
    fxn(std::string("Aditya"));
}