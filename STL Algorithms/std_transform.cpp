#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v{2,3,3,3,43,3};
    std::transform(v.begin(), v.end(), v.begin(), [](int x) {
        return x*x ;
    });
    for (int i: v ) {
        std::cout<<i <<" ";
    }
    // for to do it in new container:
    std::vector<int> v2{2,3,3,3,43,3};
    std::vector<int> v3(v2.size());
    std::transform(v2.begin(), v2.end(), v3.begin(), [](int x) {
        return x*x ;
    });   
    std::cout<< " "<< std::endl;
    for (int i: v3) {
        std::cout <<i <<" ";
    }
}