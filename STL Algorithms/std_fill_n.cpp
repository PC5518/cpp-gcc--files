#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v(10);
    std::fill_n(v.begin(), 5,  100 );
    for (int i: v) {
        std::cout<< i << " ";
    }

}