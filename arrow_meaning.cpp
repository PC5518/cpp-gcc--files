// v1->sound();
// pointer ke through function access karne ka
#include <iostream>
class room {
public:
    int size;
    room(int s):  size(s) {}
    void print() {
        std::cout << "hey there how are you"<<std::endl;
    }
};
int main() {
    room *new_pointer= new room(1225);
    (*new_pointer).print();
    // or 
    new_pointer->print();
}
//  use of arrow and pointer application