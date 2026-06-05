using namespace std;
#include <iostream>
class student {
public:
    int marks=100;
    void show() {
        cout<< marks; // Exactly. In reality, a lambda is NOT a part of the class itself.
    }
};
int main() {
    student aditya;
    aditya.show();
}
// but what if i involed lamvda ??? we will see in the next file