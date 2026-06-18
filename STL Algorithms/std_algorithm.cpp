#include <iostream>
#include <vector>
#include <algorithm>
// very important for CP!!!
int main() {
    std::vector<int> v{1,3,3,2,4,2,3};
    std::transform(v.begin(),  v.end(), v.begin(), [](int x) {
        return x*x;
    });
    for (int i:v) {
        std::cout << i<<std::endl;
    };
    
}