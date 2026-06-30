#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> A{1,2,3,4};
    std::vector<int> B{3,4,5,6};
    std::set_union(A.begin(), A.end(), B.begin(),  B.end());
    
    
}