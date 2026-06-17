#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v= {2,24,2,2,4,2,2,3,42,2,2};
    std::fill_n(v.begin(), 5,  100 );
    for (int i: v) {
        std::cout<< i << " ";
    }

}