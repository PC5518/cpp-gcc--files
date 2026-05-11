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
    v->sound();
}