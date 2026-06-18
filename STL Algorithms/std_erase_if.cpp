#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v{2,4,3,223,4,2};
    std::erase_if(v, [](int x){
        return x%2==0;
    });
    for (int i:v) {
        std::cout<<i<<" ";
    }
}