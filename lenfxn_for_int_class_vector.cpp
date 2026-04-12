#include <iostream>

#include <vector>
int main() {
    std::vector<int> deva={1,2,3,4,2,50};
    int counter= 0;
    for (int x:deva) {
        counter=counter +1;

        
    } 
    std::cout<< counter;
}