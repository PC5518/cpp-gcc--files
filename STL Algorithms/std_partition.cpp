#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v{3,2,4,2,2,34,2,2,3};
    // Backend thinking: true wale ek taraf and false wale dusre taraf
    std::partition(v.begin(), v.end(), [](int x) {
        return x%2==0;
    } );
    for (int i: v) {
        std::cout<<i << " ";
    }
    // console output: 2 2 4 2 2 34 2 3 3   even |  odd 
}