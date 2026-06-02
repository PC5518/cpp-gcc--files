#include <iostream>
int main() {
    double e=2.71;
    // now how can i convert it to a integer????
    // in python it's very easy! just integer = int(e) and boom! done! 
    // let's see the core compiler rule in cpp in converting it. 
    int x=  (int)e ;
    std::cout<< x<<std::endl;
}