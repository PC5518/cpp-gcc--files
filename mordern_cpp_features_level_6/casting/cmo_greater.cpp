#include <iostream>
using namespace std;
int main() {
    int x =-23;
    unsigned int y =4541;
    cout<<(x>y) <<endl;
// now it's assuming that that x>y  why ??? because somewhere cpp treats differently "unsigned"
    // what does computer stores??? 
    // it's storing bits
    // when it comes to unsigned the compiler assuming the bits data of the negative to be positive and created an error.
    // i should see my number line representation to understand it. it's available in the one note application.
    
}