#include <iostream>
int return_fxn(int a, int b) {
    return a+b;
    std::cout<<"use int only when u want to return a fxn" <<std::endl;
}
void print_fxn(std::string a) {
    std::cout <<"use void only when u want to print not return specific-> "<< a << std::endl;
}
int main() {
    print_fxn("Deva ");
}