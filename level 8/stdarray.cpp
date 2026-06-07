#include <iostream>
int main() {
    int array[]={1,2,3,3,4,5,5,6,6,77};
    // the biggest problem with this was size nikalna was annoying
    int size=  sizeof(array)/4;
    std::cout<<size <<std::endl;
    // now again and again doing is annoying.
}