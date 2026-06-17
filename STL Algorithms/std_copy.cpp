#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v= {1,2,3,2,456,53,3,2};
    std::vector<int> v1(8); // range define karna jaruri hai
    std::copy(v.begin(), v.end(),  v1.begin());
    for (int i:v1) {
        std::cout << i<<" " ;
    }
    // now agar ek vector se dusre vector me copy krna hai toh std::copy ka usse karte hai 
}