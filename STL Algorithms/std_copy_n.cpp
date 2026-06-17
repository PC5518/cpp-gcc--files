#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> vector1= {1,2,3,2,456,53,3,2};
    std::vector<int> vector2(2); // range define karna jaruri hai.  it's important to define the range
    std::copy_n(vector1.begin(), 2,  vector2.begin());  // i have decided to insert as much elements i want 
    for (int i:vector2) {
        std::cout << i<<" " ;
    };
    // will learn some new approach to it in future!

    // now agar ek vector se dusre vector me copy krna hai toh std::copy ka usse karte hai 
}
// Signatue:
// copy_n(source_begin, N, destination_begin)
//            ↑         ↑         ↑
//          kahan se  kitne     kahan jaaye
