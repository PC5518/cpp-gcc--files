#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> vector1= {1,2,3,2,456,53,3,2};
    std::vector<int> vector2(8); // range define karna jaruri hai.  it's important to define the range
    std::copy_if(vector1.begin(), vector1.end(),  vector2.begin(), [](int i) {
        return i%2==0;
    });
    std::erase(vector2, 0); // risky approachn as agar original approach me 0 hota then wo bhi erase ho jata
    for (int i:vector2) {
        std::cout << i<<" " ;
    };

    // now agar ek vector se dusre vector me copy krna hai toh std::copy ka usse karte hai 
}