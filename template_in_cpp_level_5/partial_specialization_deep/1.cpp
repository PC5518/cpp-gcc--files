#include <iostream>
#include <string>
template <typename type>
class car {
public:
    type speed; // now in class template automaticaly type select nahi hota hai.
};
int main() {
    car<int> ford;
    ford.speed=string("deva ");
    std::cout<< ford.speed<< std::endl;
}