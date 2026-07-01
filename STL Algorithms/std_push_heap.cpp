#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int>  v{2,3,4,33,4543,3};
    std::make_heap(v.begin(), v.end());
    v.push_back(1000);
    std::push_heap(v.begin(), v.end());
    // now the vector becomes heap again.

}