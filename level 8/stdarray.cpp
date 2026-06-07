#include <array>
#include <iostream>
#include <algorithm>
int main() {
    int array[]={1,2,3,3,4,5,5,6,6,77};
    // the biggest problem with this was size nikalna was annoying
    int size=  sizeof(array)/4;
    std::cout<<size <<std::endl;
    // now again and again doing is annoying.
    // also there were no member fxns;
    std::array<int,5> stdarray={1556,2,33,45,5};
    // just like vectors
    std::cout<< stdarray.size()<<std::endl;
    std::cout<< stdarray.front()<<std::endl;
    std::sort(stdarray.begin(), stdarray.end());
    for (int i: stdarray ) {
        std::cout<< i << " ";
    }
    // difference from vectors: 
    // array's size is fixes std::array<int, 5>
    // so overall array libraru is just like olf c style array + stl features
    // if size changes, use vector
}