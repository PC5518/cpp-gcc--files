#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v{1,2,33,444,66660};
    std::vector<int> c{2,33};
    auto data=  std::includes(v.begin(), v.end(), c.begin(), c.end());
    // this literally means that whethet this container c is the subset of v or no. 
    std::cout<<data << std::endl; 
}