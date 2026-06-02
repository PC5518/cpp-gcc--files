#include <iostream>
int main(){ 
    int x =23;
    // this was just a normal integer
    // that can store from 2147483648 to -2147483648
    // now when we store unsigned integer 
    unsigned int y =234;
    // this can only store positivvee or non negative values.
    // it's range goes from zero to 4294967295
}
// now actually what happens is that when we normally write int x=33;
// is that the plus minus symbol itself occuppies the space of 1 bit.
// int itself is of 4 byte and 1 byte has 4 bits of memory therefore total is of 32 bits
// in order to increase the range of an standard int , unsigned makes the negative part removed and the positive range increases
// it's very easy to determine it. 
