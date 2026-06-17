#include <iostream>
#include <vector>
#include <algorithm>
// the most easist thing! std::fill
int main() {
    std::vector<int>  v(8);
    std::fill(v.begin(), v.end(),7 );
    for (int i: v) {
        std::cout<<i <<" ";
    }
}