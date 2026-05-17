#include <iostream>
template <typename type1, typename type2 >
auto fxn(type1 a, type2 b) {
    return a+b;
}
int  main() {
    std::cout<<fxn(7,2.4) <<std::endl;
}