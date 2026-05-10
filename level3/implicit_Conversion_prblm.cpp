#include <iostream>
class car {
public:
    int speed;
    explicit car(int s) {
        // yaha kabhi kabhi compiler bmw(100) me 100 ka class car samajh leta hai instead of intger
        //  that's why we take it as 
        speed=s;
    }
// 99% cases me explicit lagao
};
void drive(car c) {
    std::cout<< c.speed<< std::endl;
}
int main() {
    car bmw(100);
    drive(bmw);
}