#include <iostream>
int main() {
    int  deva=23;
    int aditya = std::move(deva);
    std::cout<<aditya <<std::endl;
}
// move is applicable evrywhere