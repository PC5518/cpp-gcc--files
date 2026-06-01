#include <iostream> 
#include <cassert>

int main() {
    
    int age= -7;
    assert(age>=0);
    std::cout<< age<<std::endl;
    // now in the case when we know that the age can't be less than zero.
    // to let the program know basic things before execution we assert it.
}