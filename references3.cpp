#include <iostream>
void swap(int& a, int& b)  {
    int temp=a;
    a=b;
    b=temp;
}
int main() {
    int x=4;
    int y=7;
    swap(x,y);
    std::cout<<x<<" " <<y  <<std::endl; 
}
// C++ ka default rule:

// Function arguments are NOT editable — they are read-only copies.

// Agar edit karna hai original ko → force karo & se.
