#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v{2,4,2,3,32,4,3,18};
    std::sort(v.begin(), v.end()); // just used for normal ascending order sorting.
    for (int i:v)  {
        std::cout<<i <<" ";
    }

}