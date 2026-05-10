#include <iostream>
class car {
public:
    int speed;
    int model;
    std::string name;
    explicit car(int s, int m, std::string n): speed(s),model(m), name(n)  {}
};
int main( ) {
    car tata(10, 233,  "tata india");
    std::cout<<tata.speed <<std::endl;
}
// so basically teen tarike hota hai object banane ya fill karne ke
//  1. car bwm(100); fill kar dega via defined constructor gives fxn vibes
//  2. car bww=  100; again defieend by constructor but rsiky 
//  3. car hmw{100};  ye list initialisation karke hota hai
// actually () se data loss hota hai many times
// example :
// if i inputted 100.7 then it would only take 100 and 0.7 will bee left that's why we use {} to match the exact type we have given to sustain 