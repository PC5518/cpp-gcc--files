#include <iostream>
class vehicle {
public:
    int speed;
    int torque;
    vehicle(int s, int t) : speed(s), torque(t) {
        std::cout<<"vehicle constructor chala" <<std::endl;
    }
    // constructor  likha 
};

class Bike : public vehicle {
public:
    bool cover;
    // parent constructor call karna padega
    Bike(int s, int t, bool c) :vehicle(s,t), cover(c) {
        std::cout<<"Bike constructor chala" <<std::endl;
    }
};