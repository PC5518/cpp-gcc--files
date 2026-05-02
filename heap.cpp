#include <iostream>
int main( ) {
    int *integer= new int(421);/// IT'S A HEAP
    // THIS IS EVEN VALID FOR OUT OF FXN
//  ye main ke bahar bhi valid hai
//this is the way to add a new heap based variable
    std::cout<< *integer<<std::endl;
}