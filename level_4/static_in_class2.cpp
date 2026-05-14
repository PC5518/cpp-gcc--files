#include <iostream> 
class student {
public:
    static int marks;
    
};
int student::marks=0;
int main() {
    student deva;
    student john;
    deva.marks=234;
    std::cout<<john.marks <<std::endl;
}