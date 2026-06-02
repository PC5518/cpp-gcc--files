#include <iostream>
#include <utility> // very important to correct the compiler misintepretation.
int main() {
    int x =-23;
    unsigned int y =4541;
    std::cout<<(x>y) <<std::endl;
// now it's assuming that that x>y  why ??? because somewhere cpp treats differently "unsigned"
    // what does computer stores??? 
    // it's storing bits
    // when it comes to unsigned the compiler assuming the bits data of the negative to be positive and created an error.
    // i should see my number line representation to understand it. it's available in the one note application.
    std::cout<< std::cmp_greater(x,y)<<std::endl;
}
// the overall leearning is that be carefull in comparing the signed and unsigned integers.
