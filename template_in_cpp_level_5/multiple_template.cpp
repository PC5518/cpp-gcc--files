#include <iostream> 
//  now but in the previosus template5  we saw  one thing that  2,3.5  can't be added there.  
//  we have a fix.
// THIS IS CALLED
// Template Type Deduction

// Compiler arguments dekhke type infer karta hai.

// let's use  template to fix this problem  
// so first we tell the general fxn i.e what exactly the fxn is doing irrespective of the type.







// so to avoid this problem we 
template <typename type>
type fxn(type a, type b) {
    return a+b;
}
int main() {
    std::cout<<fxn(2,3) <<std::endl;
    std::cout<< "checking how the int and string values are different" <<std::endl;
}