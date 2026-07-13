#include <iostream>
#include <vector>
#include <numeric>
int main() {
    std::vector<int>  v{2,4,63,3,34};
    std::vector<int>  ans(v.size());
    std::exclusive_scan(v.begin(), v.end(), ans.begin(),0);
    for (int i:ans) {
        std::cout<<i <<" ";
    }
}