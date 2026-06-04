#include <iostream>
// moving to the advance level of lambda fxn 
int main() {
    int x =10;
    auto fxn =  [x](int y) {
        return x+y ; // now this is error becaause lamda ke anda x exist hi nahi karta. 
        // lambda sirf apna hi parameter ke bare me janta hai ek time me.
        // it does not has the info regarding the outof the box (lambda).
        // lambda sirf apne hi parameters janta hai
        // usko bahar ke variablle ki khabar nahi hai
    };
    std::cout<< fxn(7);
}
// bahar walo ki khabar lambda me lane ke liye we use that list portion and insert the variables and data