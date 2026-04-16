#include <iostream>
int main() {
    int deva[100];
    for (int i=0; i<100; i++) {
        deva[i]=i;
    }
    for (int i=0; i<100; i++) {
        std::cout<<deva[i]+1<<std::endl;
    }// but you can access it one by one via index
    std::cout<< deva; // you can't access a list at once

}