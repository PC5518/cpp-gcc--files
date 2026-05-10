#include <iostream>
class vehicle {
public:
    int rpm;
    int speed;
    int torque;
};
class Bike: public vehicle {
// here we inherited all the objects from the class of vehicle
public:
    bool cover;
};
int main() {
    Bike suzuki;
    suzuki.speed=100;
    std::cout<< suzuki.speed<<std::endl;
    suzuki.cover =true;
    std::cout<< suzuki.cover<<std::endl;
    //  1 is same for what we say True in python 

}