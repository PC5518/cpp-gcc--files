#include <iostream>
#include <numeric>
using namespace std;
int main() {
    int ids[5]; 
    iota(ids,ids +5, 0);
    for (int i=0; i<5;i++) {
        std::cout<<ids[i]<<std::endl;
    }
}
// iota(begin, end, starting_value);
//fills sequence automaticallyto
/* It seems like there is a typo in your comment. The correct usage should be "for vector" instead of
"for vector". The `iota` function in C++ is used to fill a sequence with incrementing values
starting from a specified initial value. In your code snippet, `iota(ids, ids + 5, 0);` is filling
the array `ids` with values 0, 1, 2, 3, and 4. */
// for vector
// vector<int> ids(5);
// iota(ids.begin(), ids.end(), 0);
//         ↑            ↑
//       START         END
//  much more readable! ✅