#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> deva= {151,550,52,25};
    std::fill(deva.begin(),deva.end(),0);
    for (auto x: deva ) {
        std::cout<<x<< std::endl;
    }
}
// In C++, std::fill is a standard library function used to assign a specific value to all elements within a certain range
//  we use algorithm