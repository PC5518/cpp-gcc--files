#include <iostream>
#include <vector>
#include <algorithm>
// the most important thing:  toh ye ek sequence me dekhta hai. toh ye set wala uniqueness all over the container nahi dikhata hai 
int main() {
    std::vector<int> v{2,2,2,4,2,3,2};
    auto it= std::unique(v.begin(), v.end());
    // now v has become:  2 4 2 3 2 3 2 
    for (int i: v) {
        std::cout<< i<<" ";
    }
    std::cout<< " " << std::endl;
    v.erase(it, v.end());  // just like std::remove(v.begin(),v.end(), 2)  and then insert that iterator to 
    for (int i:v) {
        std::cout<<i <<" ";
    }

}
// 😄 unique() pehli baar dekhkar lagta hai:

// Ye duplicates delete karega.

// Aur phir STL apna classic stunt karta hai:

// Nahi.
// Main sirf logically hataunga.
// Physically nahi.