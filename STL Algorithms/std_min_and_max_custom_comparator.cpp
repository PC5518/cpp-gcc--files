#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v{333,3,4,4223,422,53,24};
    std::cout<< std::min(2,3)<<std::endl; // now this can also be used with variables.
    std::cout<< std::max(2,43, [](int a,  int b) {
        return a>b;
    });
}
// now let's discuss the hardcoded rule for std::max
// What std::max looks like internally
// if (a < b) {
//     return b; // b is bigger
// } else {
//     return a; // a is bigger or equal
// }


//  now when i force the condition to be like a>b then it go with the return a that is with the else code.
therefor ethe compiler jumps directly to the else block.