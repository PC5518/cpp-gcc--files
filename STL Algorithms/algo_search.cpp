#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v={10,20,30,40};
    auto it = std::find(v.begin(), v.end(), 30);
    std::cout << (void*)&it<<std::endl;
    // toh aese iterator return ho kar hme 30 ka adress pata chal gya. 

}