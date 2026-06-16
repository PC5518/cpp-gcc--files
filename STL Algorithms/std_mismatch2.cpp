#include <iostream>
#include <algorithm>
#include <vector>
// now condition laga kar use kia ise.
int main() {
    std::vector<int> v={ 34,2,3,2,234,3};

    std::vector<int> vim={ 34,2,3,2,232,3};
    // now i want to find the point where this array is mismatching
    auto it = std::mismatch(v.begin(), v.end(), vim.begin(),  vim.end(), [](int a, int b) {
        return a%2==0;

        return b%2==0;
    });  // this it is a pointer based pair.
    // BE CAREFULL: 
    //  actually ye return karega iterator ka pair.  <iterator, iterator>
    std::cout << *it.first<< " "<< *it.second;
    // output: 234 232
}
