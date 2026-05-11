#include <iostream>
class vehicle{
public:

    virtual void sound(){
        std::cout << "vehicle";
    }
};

class Bike : public vehicle{
public:

    void sound() override{
        std::cout << "bike";
    }
};
int main() {
    vehicle *v= new Bike() ;
    v->sound(); /// compiler kaise 
}
// virtual function me actual object ki class ke hisaab se
// correct overridden function chalta hai.

// vtable/vptr usko internally implement karne ka compiler mechanism hai.