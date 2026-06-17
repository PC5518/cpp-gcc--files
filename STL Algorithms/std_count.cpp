#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v{1,3,2,5,5,63,3};
    // std::cout -> return value is integer type
    int counting  = std::count(v.begin(), v.end(),5);
    std::cout <<counting <<std::endl;
    
}