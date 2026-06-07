#include <iostream>
using std::cout;
using std::endl;
int main() {
    char* variable = "name";
    //  now char string ko point kar sakta hai
    cout << &variable[2] <<endl;
    cout << variable <<endl;
}