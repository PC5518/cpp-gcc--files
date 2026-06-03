#include <iostream>
// fxn object is the way of using a class as a fxn using constructor
class car {
public: 
    int add(int a, int b ) {
        return a+b; // now this is a member fxn
    }
};
// this one is a functor now it inccludes something which smells like operator and 

class truck {
public:
    int operator()(int a, int b) { // operator is predefined
        return a+b;
    }
};
int main() {
    car tata;
    std::cout<<tata.add(10,20); // now this is just a member fxn call . 

// struct is public by default
}