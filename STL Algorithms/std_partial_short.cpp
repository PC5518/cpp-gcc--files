#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v{1,3,2,4,6,5};
    std::partial_sort(v.begin(), v.begin()+2, v.end());
    for (int i: v) {
        std::cout<<i <<" ";
    }

}

// syntax: std::partial_sort(
//     first,
//     middle,
//     last
// );