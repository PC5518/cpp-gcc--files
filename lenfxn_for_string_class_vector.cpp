#include <iostream>
#include <vector>
int main() {
    std::vector<std::string> deva={"deva","aditya","anscom","ellie",};
    int counter= 0;
    for (std::string x:deva) {
        counter=counter +1;
    } 
    std::cout<< counter;
}