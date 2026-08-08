#include <iostream>
/*  these are the c style comments accross the lines
# ka asli kaam kya hai ?  
yeh .cpp wala files padhta hai, # wale line dekhe ke actual actual code ko modify and replac karta hai 
aur ek naya "clean up" version banaata hai. jo tab real compiler ko diya jata hai. matlab jab tak pre proccessor apna kaam khatam nahi karta hai atab tak compiler ne actual code like int main and other fxns ko dekha hi nahi hoga.4
asaan bhasha : preproceessing directives.
*/
#define PI 3.14159
int main() {
    std::cout << PI <<std::endl;
    int r;
    std::cin>>r; 
    double area =  PI*r*r;
    std::cout << area<<std::endl;

    // YAHA PRE PROCESSOR KE COMMANDS PE CLEAN UP KE SAMAY PI Ko literally 3.14 se replace kar deta hai. 

}