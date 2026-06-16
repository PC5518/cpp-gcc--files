#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v{
    10,
    20,
    20,
    30,
    40
    };
    // it's used to find whether any of the pair in the given format of container has an identical pair .
    auto it= std::adjacent_find(v.begin(), v.end());
    std::cout<<*it <<std::endl;
    // agar kuch nahi mila then return kar dega v.end();
    // CONS : EK BAAR AAGYA PAIR THEN AAGE KA NAHI BATAYEGA


}
