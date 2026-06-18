#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v{1,2,3,4,5,6};
    std::rotate(v.begin(), v.begin()+2,v.end());
    for (int i: v) {
        std::cout<< i <<" ";
    }

}