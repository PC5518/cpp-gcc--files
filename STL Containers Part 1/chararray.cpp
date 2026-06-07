#include <iostream>
using std::cout;
using std::endl;
int main() {
    char array[] ={1,'s',3,4};
    char* ptr[]= {(char*)"Aditya",  (char*)"Narayan"};
    // char* string="Aditya"; // you will see a warning:  ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings
    // cout<< string<<endl;
    //  so to align with mordern c++ we can add char* after
    const char* non_editable = "Aditya";
    cout<< non_editable<<endl;
}