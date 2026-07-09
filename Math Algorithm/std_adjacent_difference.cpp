#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
int main()  {
    std::vector<int> v{1,2,3,3,4};
    std::vector<int> result(v.size());
    //  suppose the vector is 1,2,3 the the adjacent pairs will be (1,2), (2,3) 
    // bas itna:  basically set creation ho rha hai.
    // now if we take the difference 2-1=1; 3-2=1;   aage - piche wala 
    std::adjacent_difference(v.begin(), v.end(), result.begin()  );
    // toh pehla element wwahi rahega and then (next - firrst) 
    for (int i: result) {
        std::cout <<i <<" ";
    }
    // 1 1 1 0 1
    // now let's see that why std::adjacentdifference and std::partial sum is just opposit of each other
}