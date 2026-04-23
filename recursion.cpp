// #include <iostream>
// void countdown(int n) {
//     while (n>=0) {
//         std::cout<< n << std::endl;
//         n--;
//     }
// }
// int main() {
//     countdown(5);
// }
//  this is how the the fxn would survive without return 
/// but by recursion we can even use return 
//  now recursion is like calling  a fxn within a fxn.
#include <iostream>
int countdown(int n) {
    if (n==0) {
        return 0; // now 
    } else {
        std::cout<<n <<std::endl;
    }
    return(countdown(n-1));
}
int main() {
    countdown(10);
}