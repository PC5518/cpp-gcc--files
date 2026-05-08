#include <iostream>
void interchange(int& a, int& b) {
    int temp=a;
    a=b;
    b=temp;
    std::cout<< "x: "<< a <<" y: " <<b <<std::endl;

} 
int main( ) {
    int x=23;
    int y =4632;

    interchange(x,y);
}