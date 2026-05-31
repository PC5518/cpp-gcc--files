#include <iostream>
#include <memory>

int main() {
// WILL GET IT SOON

// this is jus
    auto pointer = std::make_unique<int>(1000);
    std::cout<< *pointer<<std::endl; 
    // here in the unique pointer concept the data and the object get's deleted as the scope ends to avoid the memory leaks
}
