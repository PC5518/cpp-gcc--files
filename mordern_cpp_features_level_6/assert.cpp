#include <iostream> 
#include <cassert>

int main() {
    
    int age= -7;
    assert(age>=0);
    std::cout<< age<<std::endl;
    // now in the case when we know that the age can't be less than zero.
    // to let the program know basic things before execution we assert it.
}
// here we can use assert the compiler for obvious things.
// in simple words assert ke through mai strict requiremnt set karta hun for the variable.
// it will crash fi the requirement are not satisfied.