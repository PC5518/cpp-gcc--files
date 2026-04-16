#include <iostream>

int main() {
    bool deva;
    
    // 1. To take input (Type 1 for true, 0 for false)
    std::cout << "Enter 1 or 0: ";
    std::cin >> deva; 

    // 2. To see words like "true" instead of "1"
    std::cout << std::boolalpha;

    if (deva == true) {
        std::cout << "The value is: " << deva << std::endl;
    } else {
        std::cout << "The value is: " << deva << std::endl;
    }

    return 0;
}
