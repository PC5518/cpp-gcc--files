#include <iostream>
#include <vector>
#include <algorithm>
// shuffle algorith basically random permutation hai.
// basically before:  1,2,3,4,5,6
//  after: 2,1,65,3,4   // just rando order
int main() {
    std::vector<int> v{2,2,3,4,4,2,2,3,4,63};
    std::shuffle()  // random engine's knowledge is required.
}