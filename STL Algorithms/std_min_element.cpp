#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
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
    // finding the index:
    std::cout<< "the index of the largest element is"<<(it2-v.begin()) <<std::endl; // now this wil return the index.!
    std::cout<<abs(-865) <<std::endl;
}