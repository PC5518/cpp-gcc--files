#include <iostream>
#include <vector>
#include <algorithm>
// std::minmax in C++ returns a std::pair where the first element is the minimum and the second element is the maximum.

int main() {
    std::vector<int>  v{1,2,3,4,6322,334,5};
    auto data= std::minmax_element(v.begin(), v.end());// it returns an std::pair containing two iterators.
    std::cout<<"lowest element is" << *data.first  <<std::endl;
    std::cout<<"largest element is" << *data.second  <<std::endl;
} 