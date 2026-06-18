#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v{1,3,3,4,3,2,3};
    std::vector<int> v2(v.size());
    auto it= std::unique_copy(v.begin(), v.end(), v2.begin() );
    v2.erase(it, v2.end());
    for (int i:v2) {
        std::cout<<i <<" ";
    };
}