// now let's see that why std::adjacentdifference and std::partial sum is just opposit of each other
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
int main() {
    std::vector<int> v{1,3,5,52,343};
    std::vector<int> result(v.size());
    std::adjacent_difference(v.begin(), v.end(), result.begin());
    for (int i: result) {
        std::cout<< i<<" ";
    }
    std::cout<< " "<<std::endl;
    
}