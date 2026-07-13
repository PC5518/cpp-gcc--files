#include <iostream>
#include <vector>
#include <numeric>
// now inclusive scan is just like partial scan.
int main() {
    std::vector<int>  v{2,4,63,3,34};
    std::vector<int>  ans(v.size());
    std::inclusive_scan(v.begin(), v.end(), ans.begin());
    for (int i:ans) {
        std::cout<<i <<" ";
    }
    std::cout <<" now this is just like partial sum." <<std::endl;
}