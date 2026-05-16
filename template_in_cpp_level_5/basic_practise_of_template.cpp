#include <iostream>
template <typename auto_type>
auto_type random(auto_type a, auto_type b) {
    return a+b;
}
int  main() {
    std::cout << random(12.556,566.46)<<std::endl ;
}
// this is how we use template to manage the conflict between the type/class in cpp. 
