#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> vector1= {1,2,3,2,456,53,3,2};
    std::vector<int> vector2(8); // range define karna jaruri hai.  it's important to define the range
    std::copy(vector1.begin(), vector1.end(),  vector2.begin());
    for (int i:vector2) {
        std::cout << i<<" " ;
    }
    // now agar ek vector se dusre vector me copy krna hai toh std::copy ka usse karte hai 
}