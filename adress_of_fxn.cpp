#include <iostream>
int fxn() {
    int deva =55;
    std ::cout<<deva <<std::endl;
}
int main() {
    std::string deva ="aditya";
    std::cout<< deva<<std::endl;
    std::cout<< &deva<< std::endl;
    std::cout<< (void*)&fxn << std::endl; // heey compiler stop trying to be smart and tell me the memory location
}
//  & ->  act of looking at the shipping label on the box to see where it’s going
// (void*) -> it's the way of finding the value
// Think of it like this two-step process:
// & (The Scout): This goes out and finds the coordinates (the address).
// (void*) (The Translator): This interprets those coordinates so you can actually read them in Hexadecimal.
// so basically the final role of void is to translate the coordinate into machine code or hexadecimal form 
