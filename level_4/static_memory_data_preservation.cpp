#include <iostream>
using namespace std;

void tester() {
    static int x{};
    x++;//  x will be alive even when the fxn is not in used
    cout<<x <<endl;
}
int main( ) {
    tester();
    tester();
    tester();
    tester();
}