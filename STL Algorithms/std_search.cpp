#include <iostream>
#include <algorithm>
#include <vector>
int main() {
    std::vector<int>  v=  {10,20,30,40,50};
    std::vector<int> v2= {30,40}; // ab mujhe chahiye ki ye exact pattern hai yaa nahi inside v
    auto it= std::search(v.begin(), v.end(),v2.begin(), v2.end());
    std::cout <<*it <<std::endl;
    // now this is used for pattern matching or finding.
    // as it's present it will return the first element of v2
    
}