#include <iostream>
int sqaure(int a ) {
    return a*a;
} // let's say mujhe fxn ek hi baar use karna hai lekin likhna pada
// toh mai kya kar sakta hun ????  
// we can write the lambda version
// [](int a, int b) {
//     return a+b;
// }
// carefully observe the fxn name has been erased
// but how we will call it ??? 
int main() {
    // std::cout<<  sqaure(2);
    std::cout<< [](int a, int b) {
        return  a+b;
    }(1,3);
}
// this is lambda . just or simply a one time fxn use way
// very easy/ remember it!!!  iteration.