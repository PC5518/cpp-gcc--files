#include <iostream>
#include <iterator>
#include <vector>
int main() {
    std::vector<int> v={123,3,4,22,4,33,4};
    auto it= v.begin();
    std::cout<<*it <<std::endl;
    ++it;

    std::cout<<*it <<std::endl;
    // this is the most basic form of iterator and it's called as input iterator.
}