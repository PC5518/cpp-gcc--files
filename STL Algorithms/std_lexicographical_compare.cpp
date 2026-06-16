#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> a{1,2,3};

    std::vector<int> b{1,2,4};

    auto bvalue=     std::lexicographical_compare(a.begin(),  a.end() , b.begin(), b.end());
    std::cout <<bvalue << std::endl;
    // // lexicographical_compare(a,b) (note: these are containers)
    // checks whether a would come before b
    // in dictionary ordering.

    // in desi english we will say: "Container A dictionary order me
    // Container B se chhota hai kya?"
    // If yes:

    // true

    // If no:

    // false
}