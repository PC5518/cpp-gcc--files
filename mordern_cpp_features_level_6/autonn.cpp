#include <iostream> 
int main(){ 
    int deva= 234;
    int& ref_variable = deva;
    for (int i=0 ;  i<365; i++ ) {
        ref_variable++;
    }
    std::cout<< ref_variable<<std::endl;
}
// this is how we deal with normal references that is the object is same but the cover is different.
