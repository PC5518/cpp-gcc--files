#include <iostream>
int x=7;
int main() {
    {
        int x=7;
        std::cout<<x<<std::endl;
    }
    std::cout<< x;
}
// A variable is accessible only from its point of declaration to the closing } of the block it was declared in.

