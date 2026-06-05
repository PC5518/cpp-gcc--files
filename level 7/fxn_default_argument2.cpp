#include <iostream>
using std::cout;
using std::endl;
int sum(int a,  int b=10) { // b has it's default value set already
    // it will change only when the coder will change the b

    return a+b;
}
int main() {
    cout << sum(1) <<endl; // now here b has it's default value set to be 10
    cout<< sum(1,123) <<endl; // now manually the value has been provided
}