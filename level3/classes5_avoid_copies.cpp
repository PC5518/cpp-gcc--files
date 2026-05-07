#include <iostream>
void interchange(int& a, int& b) {
    int temp=b;
    a=b;
    b=temp;
    std::cout<<(a,b) <<std::endl;

} 
int main( ) {
    int x=23;
    int y =4632;

    interchange(x,y);
}