#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v{2,4,2,3,32,4,3,18};
    std::sort(v.begin(), v.end(),[](int a, int b) {
        return a>b;
        // now the biggest realisation is that what exactly has been done here?
        //  first 2>4 ? false ? then swapped to 4,2,2 now 4>2 ??? yes 
        // exact algorithm gcc ne kya use kiya hai ye toh nahi bata sakte abi ke liye.
//         Sort the container such that
    // larger elements come before smaller elements.
    }  );
    for (int i:v)  {

        std::cout<<i <<" ";
    };

}