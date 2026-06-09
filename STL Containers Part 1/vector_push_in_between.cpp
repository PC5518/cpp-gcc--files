#include <iostream>
#include <vector>
int main() {
    std::vector<int> v={2,24,242,245,22,23,23};
    v.insert(v.begin(), 3);
    // important: v.push_front(100); this does not exist
    // now this is expensive becaee the values are required to be shifted 
    for (int i: v) {
        std::cout<<i  <<std::endl;
    }
}