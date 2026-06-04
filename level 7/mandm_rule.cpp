#include <iostream>
class student {
public: 
    int marks=23;
    void increase()  {
        marks++;
    }

};
int main() {
    const student s;
    s.increase();
    // s.marks=34; // now it;s immuttable
// error ! 
// now kahani me twist
}