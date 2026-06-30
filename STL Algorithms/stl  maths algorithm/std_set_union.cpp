#include <iostream>
#include <set>
#include <algorithm>

int main() {
    std::set<int> A{1,2,3,4};
    std::set<int> B{3,4,5,6};
    std::set_union(A.begin(), A.end(), B.begin(),  B.end());
    
    
}