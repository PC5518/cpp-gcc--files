#include <iostream>
class car {
public:
    int windowsize;
    int speed;
    char version;
};
int main() {
    car ferrari;
    ferrari.windowsize=383;
    ferrari.speed=3893;
    ferrari.version='a';
    std::cout<<ferrari.speed <<std::endl;
}
// simple way to use class . 