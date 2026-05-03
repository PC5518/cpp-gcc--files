#include <iostream>
#include <memory> // very important
// Memory leak = unwanted memory occupation!
// int main() {
//     // talking about raw pointer
//     int deva =234;
//     int *pointer= new int(deva);
//     delete pointer;
//     std::cout<< *pointer<<std::endl;
//     std::unique_ptr<int> p=  std::make_unique<>
// }
// Basically raw pointers ko agar hm log delete bhi kar den tab bhi adress rah 
// jata hai 
// iska solution hai unique_ptr  jo ki pura mcafee wala shred kar deta hai 
// yani  adress be del, data bhi delete,  sab kuch shred
int main() {
    int deva=234;
    std::make_unique(deva)
}
// we can also use "using namespace as std"