#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v{8, 7, 5, 2, 1, 3, 4};
    std::pop_heap(v.begin(), v.end());
    for (int i:v) {
        std::cout<< i<<" ";
        // output:   7 4 5 2 1 3 8
    }
}
// pop_heap()

// =

// Largest ko last me bhejo

// +

// Remaining ko heap bana do.