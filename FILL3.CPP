#include <iostream> 
#include <array>
#include <algorithm>
int main() {
    std::array<int,4> deva= {1,3,45,5};
    std::fill(deva.begin(),deva.end(),2008);
    for (auto element:deva) {
        std::cout<<element<<std::endl;
    }
}