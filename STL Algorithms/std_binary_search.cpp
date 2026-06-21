
#include <iostream>
#include <vector>
#include <algorithm>
// std::lower_bound()
// std::upper_bound()
// std::binary_search()

// All three use binary search internally.

// Requirement:  it should be a sorted list already.
int main() {
    // it returns an boolean value.
    std::vector<int>  deepak{55,2,3,4,3,3,44};
    std::sort(deepak.begin(), deepak.end());
    bool found= std::binary_search(deepak.begin(), deepak.end(), 55);
    std::cout<< found;
}