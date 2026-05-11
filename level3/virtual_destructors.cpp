#include <iostream>

class vehicle {
public:

    int speed;
    int torque;
    int rpm;

    vehicle(int s, int t, int r)
        : speed(s), torque(t), rpm(r) {}

    // virtual ka matlab:
    // agar parent pointer/reference use ho,
    // toh runtime pe actual object check karo
    virtual void sound() {
        std::cout << "vehicle ki awaaz" << std::endl;
    }

    // virtual destructor ka matlab:
    // agar parent pointer se child object delete ho,
    // toh child destructor bhi chalna chahiye
    virtual ~vehicle() {
        std::cout << "vehicle destructor\n";
    }
};

class Bike : public vehicle {
public:

    bool cover;

    Bike(int s, int t, int r, bool c)
        : vehicle(s, t, r), cover(c) {}

    // override matlab:
    // "main parent ke virtual function ka apna version de raha hun"
    void sound() override {
        std::cout << "bike ki awaaz — vroom!" << std::endl;
    }

    ~Bike() {
        std::cout << "Bike destructor\n";
    }
};

class Car : public vehicle {
public:

    Car(int s, int t, int r)
        : vehicle(s, t, r) {}

    void sound() override {
        std::cout << "car ki awaaz — beep!" << std::endl;
    }

    ~Car() {
        std::cout << "Car destructor\n";
    }
};

int main() {

    // normal object
    // compiler already jaanta hai ki ye Bike object hai
    Bike suzuki(100, 50, 3000, true);

    // direct Bike wala function chalega
    suzuki.sound();




    // parent pointer bana
    vehicle* v1 = new Bike(100, 50, 3000, true);

    // actual object Bike hai
    // but pointer type vehicle* hai

    vehicle* v2 = new Car(200, 80, 4000);




    // runtime pe actual object check hoga

    // actual object = Bike
    // toh Bike::sound() chalega
    v1->sound();

    // actual object = Car
    // toh Car::sound() chalega
    v2->sound();




    // pointer ka address print hoga
    std::cout << v1 << std::endl;




    // delete:
    // 1. destructor call
    // 2. memory free

    // virtual destructor ki wajah se:
    // pehle Bike destructor
    // fir vehicle destructor
    delete v1;

    // pehle Car destructor
    // fir vehicle destructor
    delete v2;
}