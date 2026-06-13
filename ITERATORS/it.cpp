#include <iostream>
#include <vector>
int main() {
    std::vector<int> v={2,23,42,234,22,24,42};

    auto it= v.begin();
    std::cout<< *it <<std::endl;
    ++it;
    std::cout<< *it <<std::endl;
    // so literally this iterators moves across the whole vector array.
    // for me as a 2 months beginner i am assuming it as an special type whicch can roa around and walk .
    // iterator has it's own iterator type. it may seem like  a pointer but it's not a pointer.
}