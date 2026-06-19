#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
int main() {
    std::vector<int> v{1,2,3,4,5,6};
    bool  data= std::is_sorted(v.begin(), v.end());
    std::cout<< data;
}