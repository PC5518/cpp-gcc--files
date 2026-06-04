#include <iostream>
class student{ 
public: 
    mutable int marks=23; // ->  mutable allows to be remain still editable
    void show()   const  { // now this is a normal const member fxn. i.e object ko modify nahi kar skta
        std::cout<< marks<<std::endl;
    }
    void increase() const {
        marks++; // becasue marks is already explicitly maded mutable
        // even if still the object is maded mutable 
    }
};