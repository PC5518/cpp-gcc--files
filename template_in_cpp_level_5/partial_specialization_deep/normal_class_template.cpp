#include <iostream>
template <typename type>
class car {
public:
    type speed;
    type rmp;
};
// so basically the type is appllied at all the type beneath in normal case of template
int main() {
    car<int> ford;
    ford.speed=344;
    ford.rmp=23;
    std::cout<<ford.speed  <<std::endl;
}