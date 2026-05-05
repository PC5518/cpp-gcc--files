#include <iostream>
#include <memory>
//  problem with shared pointer
int main() {
    auto a = std::make_shared<int>(10);
    auto b =  std::make_shared<int>(223);
// weak_ptr ka ek hi kaam:

// "Woh data abhi bhi hai ya shred ho gaya?" — check karna!
    std::weak_ptr<int> w=b;
    std::cout<< w.lock()<<std::endl;
}