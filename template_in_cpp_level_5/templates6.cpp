#include <iostream>
template <typename type1,  typename type2> 
// note: here type2 and type1 are not datatype they are to be a datatype in the future 
// that's why it's called as a placeholder
auto fxn(type1 a, type2 b) {
    return  a+b;
}
int main() {
    std::cout<<fxn(2.0,2.1) <<std::endl;
}
// multiple templateb