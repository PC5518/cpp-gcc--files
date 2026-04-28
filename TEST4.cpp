#include <iostream>
void deva(void) {
    std::cout<<"deva is a good boy" <<std::endl;
}
int main() {
    int deva= 3;
    std::cout<< deva<< std::endl;
    std::cin>>  deva;
    std::cout<< deva<< std::endl;
    deva();
}