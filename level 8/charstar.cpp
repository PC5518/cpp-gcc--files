#include <iostream>
using std::cout;
using std::endl;
int main() {
    char* ptr = "name";
    //  now char string ko point kar sakta hai
    cout << &ptr[2] <<endl;
    cout << ptr <<endl;
}