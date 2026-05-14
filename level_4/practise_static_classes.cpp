#include <iostream> 
class student {
public:
    static int marks;

};
int main() {
    student aditya;
    aditya.marks =23;
    student john;
    student ellie;
    std::cout <<ellie.marks <<std::endl;
}