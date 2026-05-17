#include <iostream>
template <typename type1, typename type2 >
auto fxn(type1 a, type2 b) {
    return a+b;
}
int  main() {
    std::cout<<fxn(7,2.4) <<std::endl;
}
// Compiler, ab tumhare paas multiple independent placeholder types hain.
//pehke compiler ke pass ek hi name type tha that's why error aa jata tha for eg.
template <typename type>
type fxn2(type a, type b) {
    return a+b;
}// toh when we enter fxn2(2,2.1) 
// if compiler chooses *int* then 2.1 will be an error because it is not ann integer. rather it;s an double value.
// if it chooses double it will then 2 won't be  recognised as an double anymore as double needs 2. or point specifically something