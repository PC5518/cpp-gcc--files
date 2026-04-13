#include <iostream>
int main() {
    try {
        int deva;
        std::cin>>deva;
        std::cout<< "Your input is " << deva;
    }
    catch (...) {
        std::cout<<"Please enter an integer. wrong input !";
    }

}