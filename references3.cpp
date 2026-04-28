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