#include <iostream>
#include <memory>
// shared pointer
// now unique pointer lekin copy nahi ho skta hai . 
// int main() {
//     auto p = std::make_unique<int>(10);
//     auto p1=p;
//     std::cout<< p1 <<std::endl; // wont' work
// }


// ================================================================
// shared_ptr = unique_ptr jaisa — bas share karne ka option available hai!
// ============================================================================


int main() {
    auto p = std::make_shared<int>(10);
    auto p1= p;
    std::cout<< *p1<<std::endl;
}