#include <iostream>
#include <vector>
// now  this equal one return a boolean data
#include <algorithm>
int main() {
    std::vector<int> v1{10,20,30};

    std::vector<int> v2{10,20,30};
    bool result = std::equal(v1.begin(), v1.end(),  v2.begin(), v2.end());
    std::cout << result;
    // iska kaam hai check karna ki do set ya array same hai yaa nahi.
    // Internally STL roughly does:

    // 10 == 10 ✅

    // 20 == 20 ✅

    // 30 == 30 ✅
    // therefore output 1 i.e true.

    // mismatch:  where they differ?  equal: kya ye dono containers equal hai ? mismatch()=Detective

}