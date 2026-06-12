#include <iostream>
#include <set> // multisets comes under set only
// in one word: set me no unique value but in multiset unique value are *allowed*
// this multiset is even sorted
// sorted and duplicates allowed 
int main() {
    std::multiset<int> deva;
    deva.insert(10);
    deva.insert(10);
    deva.insert(10);
    deva.insert(10);
    deva.insert(10);
    deva.insert(10);
    deva.insert(10);
    std::cout << deva.count(10)<<std::endl;
}