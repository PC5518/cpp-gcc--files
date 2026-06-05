using namespace std;
#include <iostream>
class student {
public:
    int marks=100;
    void show() {
        auto fxn = [this]() {
            std::cout<< marks <<std::endl;
        };
        fxn();
    }
};

int main() {
    student aditya;
    aditya.show();
}
// but what if i involed lamvda ??? we will see in the next file
