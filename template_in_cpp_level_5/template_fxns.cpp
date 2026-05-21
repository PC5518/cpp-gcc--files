#include <iostream>
template <typename type>
type fxn(type input) {
    std::cout<<input<< std::endl;
}
int main() {
    fxn(5);
}