#include <iostream>

class vehicle {
public:
    int speed;
    int torque;
    int rpm;

    vehicle(int s, int t, int r) : speed(s), torque(t), rpm(r) {}

    virtual void sound() {
        std::cout << "vehicle ki awaaz" << std::endl;
    }// “Ye function inheritance mein override ho sakta hai, aur agar parent pointer/reference se call aaye toh runtime pe actual object check karna.”
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

    // pointer — arrow
    vehicle* v1 = new Bike(100, 50, 3000, true); // we did it to create memory on heap
    vehicle* v2 = new Car(200, 80, 4000); 
// it's like Bike v1();..............
    v1->sound();             // Bike ka sound ✅
    v2->sound();             // Car ka sound ✅

    // cleanup
    delete v1;
    delete v2;
}
