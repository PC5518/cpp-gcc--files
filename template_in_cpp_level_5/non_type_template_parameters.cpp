#include <iostream>
template <int n>
//  n is not a datatype
//  n is actual integer value placeholder
void print() {
    std::cout<< n<<std::endl;
}
int main() {
    print<933>();
}