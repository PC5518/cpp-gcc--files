#include <iostream>
int main() {
    int arr[]={2,24,34,2,2,4,2,254,3};
    int* var =arr;// now this will be used to store the adress (of the first element)
    std::cout << var <<std::endl; // var for adress.
    ++var; // this is an natural way to move to the next memomry adrees 
    std::cout<< *var;
}