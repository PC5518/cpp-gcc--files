#include <iostream>
using std::cout;
using std::endl;
int main() {
    
    const char* ptr = "name"; 
    
    // by adding the asterik i told the comoiler that i wanna add multiple character
    // now let's try to edit name;
    cout<< ptr <<endl;
    const char* array[]= {
        "Aditya" , "Narayan "
    };
}