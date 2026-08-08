#include <iostream>
#include <vector>
int main() {
    std::vector<int>  v ={2,3,4,233,34,53,33};
    auto it=  v.begin();
    while (it != v.end()) {
    std::cout <<*it <<" ";
    it++;
    }
    std::cout <<" " <<std::endl;
    std::cout << *(v.end()) <<std::endl; // 
}