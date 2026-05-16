#include <iostream>
// int add_double(double a, double b) {
    // return a+b;
// } //  note it is set to return int so it;'s required to set  to double 
double add_double(double a , double b){
    return a+b;
}
int main() {
    std::cout<< add_double(2.2,3.34) << std::endl;
    std::cout<< add_double(2,3) << std::endl;

}
// NOW THIS IS HOW WE CREATE A DOUBLE FXN TO ADD IT 
//  NOW IN TEMPLATE 4 LET'S SEE HOW TO DO STRING