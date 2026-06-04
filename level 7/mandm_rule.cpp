#include <iostream>
class student {
public: 
    int marks=23;
    void increase()  {
        marks++;
    }
    // now when it comes to 
    void show() const {
        std::cout<<marks <<std ::endl;
    }

};
int main() {
    const student s; // compiler ka logic:  ye object abhi read only mode me hi hai  
    // s.increase(); illegal !
    s.show(); 
    // now why is it not workng without const after show()? ???
    // reason:  because In C++, a const object can only call const member functions.
    // when object s was in read only mode it means
    // s.marks=34; // now it;s immuttable
// error ! 
// now kahani me twist
}
// actauilly compiler is like mujhe gurantee nahi ki show() fxn modify nahi karega