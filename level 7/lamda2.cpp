#include <iostream>
// moving to the advance level of lambda fxn 
int main() {
    int x =10;
    auto f =  [](int y) {
        return x+y ; // now this is error becaause lamda ke anda x exist hi nahi karta. 
        // lambda sirf apna hi parameter ke bare me janta hai ek time me.
        // it does not has the info regarding the outof the box (lambda).
        // lambda sirf apne hi parameters janta hai
        // usko bahar ke variablle ki khabar nahi hai
        
    };
}
// we will see the solution in the next lambda3.cpp file