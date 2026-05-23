#include <iostream>
template <typename type>
class car {
public:
    type speed;
    type deva;
    type himanshu;
    type model_number;
    void show() {
        std::cout<<speed  <<std::endl;
    }
};
int main() {
    car<int> ford;
    ford.speed=234;
    car<std::string>  tata;
    tata.speed="tata speed is being prinetd";
    std::cout<< tata.speed<<std ::endl;

}