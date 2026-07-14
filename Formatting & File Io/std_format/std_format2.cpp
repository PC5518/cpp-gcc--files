#include <iostream>
#include <format>
int main() {
    int age =234;
    // now suppose say that i also want to print in 10 spaces. 
    // align to right
    // fill empty spaces with * etc 
    // this is where format comes up 
    // geneeral structure:  {: format specifier}
    std::string s =  std::format("Age= {:>10}", age); // this is simply telling how to  print ! 
    // break it and understand
    // {}

    // ↓

    // Insert value



    // {:...}

    // ↓

    // Insert value

    // AND

    // format it


    // NOW THIS {} is an insert argument. and this : means formating starts here
    std::cout<<s <<std::endl;
    //  this >10 means right ke side le jao khiska ke placeholder ko .

    // other include < > ^ and other

}
