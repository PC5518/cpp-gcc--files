#include <iostream>




// pen ek alag class
class Pen {

public:

    void write() {

        std::cout << "Pen is writing" << std::endl;
    }
};




// Student class ke andar Pen object
// THIS IS COMPOSITION

class Student {

public:

    Pen mypen; // Student HAS-A Pen

};




int main() {

    Student aditya;

    aditya.mypen.write();
}
// ek class ke andar
// dusri class ka OBJECT member banana