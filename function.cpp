#include <iostream>

// function definition
int deva(int a, int b) {
    int c = a + b;
    std::cout << c;
    return c;
}

// main is the entry point — always needed!
int main() {
    deva(5, 10);  // call function with values
    return 0;
}