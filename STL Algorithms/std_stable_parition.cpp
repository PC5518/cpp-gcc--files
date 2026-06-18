#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v{3,2,4,2,2,34,2,2,3};
    std::stable_partition(v.begin(), v.end(), [](int x) {
        return x%2==0;
    });
    for (int i:v) {
        std::cout<< i<<" " ;
    }
    // console output: 2 2 4 2 2 34 2 3 3   even |  odd 
    //  now the thing to be noticed is that the order is  preserved.
    // that's why for the order to be preserved we use stable partition
}