#include <iostream>
// "+" se apana khud ka kaa karao
class car {
public: 
    int speed;
    car(int s) { // constructor hai, parameterized constructor hai
        speed =s;
    }
    //  now i will define  a fxn 
    //  in reality operator is nothign but a fxn 
    //  note:  car ek typee hai jaise int , bool etc.
    car operator+(const car& other) {
        return  car(speed +  other.speed);
    }

};
int main( ) {
    car ford(100);
    car tata(200);
    std::cout <<(ford+ tata).speed <<std::endl;
}