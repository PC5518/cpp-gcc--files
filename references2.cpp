#include  <iostream>
int main() {
    int x=4;
    int y=28;
    // now let's use ref to swap up the value 
    // x and y are two boxes with values
    // int& a = x means we put a DHL label 'a' on x's box
    // now x and y have two labels each: x,a and y,b
    // ek teer do nishane — shoot through a, x gets hit
    // whatever we do to a, we do to x — same box, always

    int& a = x; // naya var a mat banana just wrap kardo a me i.e ek hi hai dono

    int& b= y;
    // what's the advantage??? 
    int temp =  a;
    x=y;
    y=temp ;
    std::cout<<x << " "<<y <<std::endl;


}