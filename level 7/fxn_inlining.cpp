#include <iostream>
inline int square(int x ) {
    return x*x;
} // now if the compiler inlines itself then conceptually it becomes:
//  int y = sqaure(5);
//  int y =  5*5 ; i.e directly will happen.
int square_normal_fxn(int x ) {
    return x*x;
}   //  now this is a normal fxn
    // now whenever you call this fxn cpu will make a stack frame
    // actually fxn ke liye thodi stack memory lagti hai.
    // and as the fxn gets over the stack frame gets destroyed

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
