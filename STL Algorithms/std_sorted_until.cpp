#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
int main() {
    std::vector<int>  v{1,2,3,4,5,44,35,3};
    auto it=std::is_sorted_until(v.begin(), v.end()); // returns an iterator
    std::cout<< *it<<std::endl;
}
//  outuput: 35 it means from here the list is not sorted.