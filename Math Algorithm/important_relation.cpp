// now let's see that why std::adjacentdifference and std::partial sum is just opposit of each other
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
int main() {
    std::vector<int> v{1,3,5,52,343};
    std::vector<int> result(v.size());
    std::vector<int>  original_vector(v.size()); 
    std::adjacent_difference(v.begin(), v.end(), result.begin());
    for (int i: result) {
        std::cout<< i<<" ";
    }
    std::cout<< " "<<std::endl;
    std::partial_sum(result.begin(),  result.end(), original_vector.begin());
    std::cout<< " here we are back at eh original vector v from where we started:  ";
    for (int i: original_vector) {
        std::cout<< i<<" ";
    }
}