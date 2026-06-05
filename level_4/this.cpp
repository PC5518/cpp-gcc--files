// the actual use of this
//  the times when compiler can get confused betweeen variablee namee and parameters;
#include <iostream>
class Person {
    int height;
    Person(int height) {
        this->height=height; // it tells the compiler to take from the variable that belongs to the outside of the object or the object part. it avoids the parameters.

    }
};
int main() {
    //  play with your code here
}
