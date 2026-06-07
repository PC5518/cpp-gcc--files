#include <iostream>
using std::cout;
using std::endl;
int main() {
    
    char* ptr = "name"; 
    // by adding the asterik i told the comoiler that i wanna add multiple character
    // now let's try to edit name;
    ptr[0]='s';
    cout<< ptr <<endl;
}