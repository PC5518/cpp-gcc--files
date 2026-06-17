#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::endl;
using std::vector;
int main() {
    vector<int> v = {3, 7, 9, 11};
    bool r = none_of(v.begin(), v.end(),[](int a){
        return a % 2 == 0; 
    });
    cout << r;
}
// Golden rule:

// Lambda ke andar sirf ek kaam hota hai — ek expression evaluate karo aur true/false do. Compiler ko bas wahi chahiye! ✅

