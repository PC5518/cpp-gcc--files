#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v{2,4,232,22,2,34,2,2,2367};
    std::vector<int> even(v.size());
    std::vector<int> odd(v.size());
    auto it=std::partition_copy(v.begin(), v.end(), even.begin(), odd.begin(), [](int x) {
        return x%2==0;
    });
    even.erase(it,  v.end());
    // partition copy bolta hai. true wale ek contaier me and false wale dusre me daal do.
    for (int i:even) {
        std::cout<< i<< " ";
    }
    std::cout<< " "<< std::endl;
    for (int i:even) {
        std::cout<< i<< " ";
    }
}