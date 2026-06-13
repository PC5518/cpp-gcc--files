#include <iostream>
#include <vector>
int main() {
    std::vector<int> v={2342,2342};
    v.push_back(10);
    v.push_back(45);
    v.push_back(34);
    v.push_back(343);
    v.push_back(16);
    for (const int& i: v){
        std::cout << i<<" ";
    }
    std::cout <<" " <<std::endl;
}