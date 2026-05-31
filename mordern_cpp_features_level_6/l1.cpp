#include <iostream>
#include <memory>

int main() {
    int* var= new int(10);
    std::cout<<*var <<std::endl;
// this is just a normal pointer.
    auto pointer = std::make_unique<int>(1000);
    std::cout<< *pointer<<std::endl; 
    // here in the unique pointer concept the data and the object get's deleted as the scope ends to avoid the memory leaks
    // now the problem with unique pointer is that we cannot create copy liek 
    // auto pointer1= pointer; // not possible as  the unique word itself explaoms the rrole 
    // std::cout<< *pointer <<std::endl;
    // basically according to shared ptr one cannot have two names on the same adress that's why 
    // we created shared_ptr that will have the same adress for ptr2 and ptr3


    // before that let's see the traditional way of creating a unqiue ptr
    // yes, make_unique was intentionally designed to create an object and immediately wrap it inside a unique_ptr.
    std::unique_ptr<int> deva(new int(100));
    std::cout<< *deva<<std::endl;
}