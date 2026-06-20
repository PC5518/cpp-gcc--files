#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int>  v{2,32,24,35,3};
    std::vector<int> v2{2,3,3,2,3333,3};
    std::vector<int> final_vector(v.size()+v2.size());
    std::merge(v.begin(), v.end(), v2.begin(), v2.end(), final_vector.begin());
    for (int i:final_vector) {
        std::cout <<i << " ";
    };
}