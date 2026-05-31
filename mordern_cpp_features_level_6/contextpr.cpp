#include <iostream>
constexpr int square(int x) {
    return x*x;

}
int main() { 
    int x=154;
    std::cout<<"the square of 99 is: " <<square(99);
    //  normally what happens is that program starts then x gets the value 5 and then so  onnnnn............
//     What happens?

// Compiler says:

// Okay.
// When the program runs,
// I'll create x and put 5 into it.

// This is called:

// Runtime

// The CPU will handle it when the program starts.
// similarly
    int deva =3+34;
    // here also cpu calculates and store the data into it.   A BIG NOTE: mordern compiler often optimizes this condition as they are very smart.
    // now when we do this thing:
    constexpr int anscom=23+738;
    // it means saveit and pack it into under the variable name by assigning a memory
}
// very imp fact
//  accha toh iska matlab jo kaaam runtime ke time me hota hai wo kaam compilation ke time bhi ho skta hai ????
// answer is yes! 
// the core idea:  Jo kaam CPU runtime ke time karta tha, wo compilation ke dauran pehle hi ho sakta hai. 

// iska use aata hai jaaha baat computing ki aati hai. for exampels this can also be used in fxns also.
// let's form a square fxn