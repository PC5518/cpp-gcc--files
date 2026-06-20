#include <iostream>
// now this algorithm is very much powerful for CP!
#include <vector>
#include <algorithm>
#include <string>
// overall glimpse: nth element finder without sorting
int main() {
    std::vector<int>  v{1,23,3,2,4,3453,434,3234,53,32};
    // now let's say i want the third smallest element here.  
    // ek toh method hai ki sort karo then via iterator or index tisre element tak jao 
    // but why to go so long. we have this algorithmm to solve the problem:
    std::nth_element(v.begin(), v.begin()+2, v.end());  // now the mid one is the nth element
    //  now this is also used heavily for finding median in cp
    auto it= v.begin();
    for (int i=0; i<2;i++) {
        ++it;
    };
    std::cout<< *it<< std::endl;
    // ya proffesional or dimag wala method:
    std::cout<< *(v.begin()+2);
}