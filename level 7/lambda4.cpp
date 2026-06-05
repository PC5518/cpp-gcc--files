#include <iostream>
// moving to the advance level of lambda fxn 
int main() {
    int x =10;
    auto fxn =  [&x](int y) { // this is the capture list [] yani lambda ne ye value capture kar liya.
        x=  x+y; ; // now this is error becaause lamda ke anda x exist hi nahi karta. 
    };
    fxn(7); // so lambda can also edit the variable using reference.
    // withoout reference (&) it was just like the access to the data.  but after reference it can access the adress and perform edit to the actual fxn;
    std::cout<<  x;
}
// bahar walo ki khabar lambda me lane ke liye we use that list portion and insert the variables and data
