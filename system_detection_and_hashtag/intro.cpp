#include <iostream>
/*  these are the c style comments accross the lines
# ka asli kaam kya hai ?  
yeh .cpp wala files padhta hai, # wale line dekhe ke actual actual code ko modify and replac karta hai 
aur ek naya "clean up" version banaata hai. jo tab real compiler ko diya jata hai. matlab jab tak pre proccessor apna kaam khatam nahi karta hai atab tak compiler ne actual code like int main and other fxns ko dekha hi nahi hoga.4
asaan bhasha : preproceessing directives.
*/
#define PI 3.14159   // this is a very old c style approach
// now the main question is that why not ?  
//  reason:  because this #define is not a typee it is literally a text replacmeent thereofre it is not a variable with it's type.  

int pi  =2342;

int main() {
    std::cout << PI <<std::endl;
    int r;
    std::cin>>r; 
    double area =  PI*r*r;   // preprocessign me clean code compile hoga:   3.14159*r*r   
    // compiler iska type automatically double man leta hai because c++ me jab point aa jata hai toh man leta hai.
    std::cout << area<<std::endl;

    // YAHA PRE PROCESSOR KE COMMANDS PE CLEAN UP KE SAMAY PI Ko literally 3.14 se replace kar deta hai. 

}