#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v{1,24,533,45};
    // now min max kya tha ki only two values ko compare karta tha 
    // now this mik_element will return the minimum element as an iterator.
    // that is now yaha jitne bhi elements ho container me.
    auto it=std::min_element(v.begin(), v.end());
    std::cout<<(*it) <<std::endl;
    auto it2=std::max_element(v.begin(), v.end());
    std::cout<<(*it2) <<std::endl;   
    // extremely used !!

}