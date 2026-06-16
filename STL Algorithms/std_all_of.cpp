#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v =  {1,23,2,42,5,4};
    // now this std::all_of is applied to check for all;
    bool value =  std::all_of(v.begin(), v.end(), [](int a) {
        return a%2==0;
// if all true then true aa gya  and if agar ek bhi false aagya toh pura false.
    });
    std::cout<<value << std::endl;
}