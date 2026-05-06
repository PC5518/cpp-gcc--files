#include <iostream>
int main() {
    int password=58690;
    int input;
    std::cout<< "Mumma give the password: ";
    std::cin>> input;
    if (input ==password) {
        std::cout<<"You mobile is unlocked" <<std::endl;
    } else {
        std::cout << "You have entered wrong password"<<std::endl;
    }
}