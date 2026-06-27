#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    
    std::vector<int>  vector{2,45,577,7886};
    auto it=std::lower_bound(vector.begin(), vector.end(),45);
    auto it2=std::lower_bound(vector.begin(), vector.end(),55);
    std::cout<<"45 chahiye toh 45 ko iterator ke form me return kar ke dega: " << *it <<std::endl ;
    std::cout<<"55 chahiye toh 55 se just jo sabse bada hoga wo dega i.e: " << *it2 <<std::endl ;

}