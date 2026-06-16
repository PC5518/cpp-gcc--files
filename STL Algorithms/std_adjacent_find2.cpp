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
    auto it= std::adjacent_find(v.begin(), v.end(), [](int a, int b) {
        return std::abs(a-b)<=2 ;
    });
    std::cout<<*it <<std::endl;
    // agar kuch nahi mila then return kar dega v.end();
    // CONS : EK BAAR AAGYA PAIR THEN AAGE KA NAHI BATAYEGA
    // my final reasoning: 
    // accha toh yehh search karta hai like by t aking index 0 and 1 then 1 and 2 and so on for matchin g??? that's why u did [](int a, int b) and not  just int a???? toh  ye conditon lagaya right ?

}
