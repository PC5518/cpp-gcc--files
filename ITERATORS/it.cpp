#include <iostream>
#include <vector>
int main() {
    std::vector<int> v={2,23,42,234,22,24,42};

    auto it= v.begin();
    std::cout<< *it <<std::endl;
    ++it;
    std::cout<< *it <<std::endl;
    // so literally this iterators moves across the whole vector array.
}