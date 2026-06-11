#include <iostream>
#include <deque>
#include <vector>

int main() {
    std::deque<int> list= {1,2,342,23};
    // now the main problem with vector is that addign at the back is very easy but when requied to add on the front it can be really ram and memory consuming that is adding in the front means pushing the other elements to the right. 
    std::vector<int> v={2,2342,223,2,23,42,2,3,2};
    v.insert(v.begin(),  5);
    for (int i: v) {
        std::cout <<i << " ";
    }
    // now here every  intger is shifted to the right. and this is a problem as it consumes ram.  
    std::cout<< " "<<std::endl;
}