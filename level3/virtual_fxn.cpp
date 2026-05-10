#include <iostream>

class vehicle {
public:
    int speed;
    int torque;
    int rpm;

    vehicle(int s, int t, int r) : speed(s), torque(t), rpm(r) {}

    virtual void sound() {
        std::cout << "vehicle ki awaaz" << std::endl;
    }
};

class Bike : public vehicle {
public:
    bool cover;

    Bike(int s, int t, int r, bool c) : vehicle(s, t, r), cover(c) {}

    void sound() override {
        std::cout << "bike ki awaaz — vroom!" << std::endl;
    }
};

class Car : public vehicle {
public:
    Car(int s, int t, int r) : vehicle(s, t, r) {}

    void sound() override {
        std::cout << "car ki awaaz — beep!" << std::endl;
    }
};

int main() {
    // normal object — dot
    Bike suzuki(100, 50, 3000, true);
    suzuki.sound();          // Bike ka sound ✅
    vehicle *v1 = new Bike(100,50,300,true);
    vehicle *v2= new Car(200,80,4000);

    v1->sound();
    v1->sound();


}