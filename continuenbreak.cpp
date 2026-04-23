#include <iostream>
// break:  exit the loop immidiately
int main() {
    for (int i=0;i <100; i++) {
        std::cout<<i <<std::endl;
        if (i==50) {
            std::cout<< "the number is" << i<<std::endl;             
            break;

        }
    }
}
// continue just skips the rest of the current iteration and jumps straight to the next one.
