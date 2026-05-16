#include <iostream>
int main(){
    char var='6';
    std::cout << var<<std::endl;
    char list[]= {'2','2','4','\0'};
    for (int i:  list) {
        std::cout<< list[i]<<std::endl;
    }
}