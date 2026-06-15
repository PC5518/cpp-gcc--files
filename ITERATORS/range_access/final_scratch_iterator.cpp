#include <iostream>
class Iterator { // so let's create a new custom datatype called iterator.
private://  THIS POINTER WILL STORE THE ADRESS OF AN VARIABLE OR AN OBJECT
    int* ptr; // only the code inside the class can touch it.
public:
    Iterator(int* p) { // now this will take the adress of first element of the array.
        ptr  = p; // pehle element ka adress store kar liya.
    }
    int& operator*() {
        return *ptr ;
    }
    Iterator& operator++() {
        ++ptr;
    }
    Iterator& operator--() {
        --ptr;
    }
};
int main() {
    int arr[]= {1,234,2,24,2,3,4,53,2}; //
    std::cout<< arr[2];
}