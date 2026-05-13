#include <iostream>
using namespace std;
void printer() {
    static int x=0;
    x++;
    cout<< x<<endl;
}
int main() {
    printer();
    printer();
    printer();
    printer();
    printer();
    printer();
    printer();




}
// key oberservation: here inside the fxn once the fxn is again starting from the begining the variable x doesn't reset or form a new varible of x=0;
