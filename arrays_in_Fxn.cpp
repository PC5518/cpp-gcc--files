#include <iostream>
void sizeofar(int array[]) {
    std::cout<< sizeof(array)<<std::endl;
}
int main(){ 
    int deva[] = {1,2,34,5};
    sizeofar(deva) ;
    std::cout<<deva <<std::endl;

}