#include <iostream>
class car {
    int speed;
    car(int s) {
        speed=s;
    }
};
void drive(car c) {
    std::cout<< c.speed<< std::endl;
}