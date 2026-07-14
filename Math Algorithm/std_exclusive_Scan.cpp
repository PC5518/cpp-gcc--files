#include <iostream>
#include <vector>
#include <numeric>
int main() {
    std::vector<int>  v{2,4,63,3,34};
    std::vector<int>  ans((v.size()));
    std::exclusive_scan(v.begin(), v.end(), ans.begin(),0);
    for (int i:ans) {
        std::cout<<i <<" ";
    }
}
// main difference:  "inclusive scan me by default pehla value hi index 0 se shuru hoga" and in exclusive ham last me choose karenge in fxn signature.