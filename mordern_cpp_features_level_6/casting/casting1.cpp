#include <iostream>
int main() {
    double e=2.71;
    // now how can i convert it to a integer????
    // in python it's very easy! just integer = int(e) and boom! done! 
    // let's see the core compiler rule in cpp in converting it. 
    int x=  (int)e ;
    std::cout<< x<<std::endl;
    // now when it comes to the compiler it does not behave like c++;  
    // compiler does not convert like python;
    //in some cases it do behave and applies implicit conversions for example between  int and double;
    // for example:
    double decimal=3.14;
    int integer= decimal;
    std::cout<<integer <<std::endl; // here the compiler automatically takes the decimal part and performs the implicit conversions.
    // implicit conversion took place
}
