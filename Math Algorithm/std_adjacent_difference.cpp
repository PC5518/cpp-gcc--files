#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
int main()  {
    std::vector<int> v{1,3,682,23,56723,45};
    std::vector<int> result(v.size());
    auto result  =std::adjacent_difference(v.begin(),  v.end())
    
}