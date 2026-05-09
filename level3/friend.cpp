#include <iostream>
class car {
private:
    int data;
    int deva;
public:
    int public_Data;
    car(int m) {
        public_Data=m;
    }
    friend void showPrivate(car& new_format) {
    std::cout< new_format.data <<std::endl;

    }
};
int main() {
    
}