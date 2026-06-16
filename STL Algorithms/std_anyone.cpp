#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v{10,23,2,56,2,3562,34};
    auto value =std::any_of(v.begin(), v.end(),[](int  a) {
        return a%2!=0;
    });  // it means kam se kam koi ek (atleast any one).  all_of ka matlab tha: sabke sab (all)
    std::cout<< value<<std::endl;
}