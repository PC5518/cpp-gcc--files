#include <iostream>
#include <string>
template <typename type>
class car {
public:
    type speed;
    car(type input) {
        speed=input;
    } // now in class template automaticaly type select nahi hota hai.
};
int main() {
    car ford(23544);
    std::cout<< ford.speed<< std::endl;

}