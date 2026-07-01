#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v{333,3,4,4223,422,53,24};
    std::cout<< std::min(2,3)<<std::endl; // now this can also be used with variables.
    std::cout<< std::max(2,43)<< std::endl;
    int largest=  std::max({2,4,5,3,433445,33});
    std::cout<< largest<<std::endl ;
}