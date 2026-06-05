#include <iostream>
inline int square(int x ) {
    return x*x;
}
int main() {
    std::cout<<square(5*5) << std::endl;
}
// now without inline fxn 
// main()
//   |
//   |----> square() ...computing gets here.....
//   |
//   <---- return

// now without inling the compiler thinks ok so the fxn is just x*x .
// itna chotta fxn toh ok
// mai sidha yahi chipka deta hun.
// so internally it does std::cout<< (x*x ); 