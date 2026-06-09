#include <iostream>
#include <list>
int main() {
    std::list<int> list={1,2,2,3,4,34};
    //  why even the list was needed ??? 
    // man lo in  vector [10][20][30][40] ke beech me 25 laana hai then 30 ko shift karo and other ko right ke side. therefore kaam jyada.
    // if we are required to insert  a lot of thing in billions of data set then ???? bar bar shift karo.

    // then node kya hota hai:   
    // basically node is data + adress of next node.
    //     Suppose:

    // 10 -> 20 -> 30

    // Memory actually ho sakti hai:

    // Address

    // 1000 : [10 | 5000]

    // 5000 : [20 | 9000]

    // 9000 : [30 | null]

    // Notice:

    // 10
    // 20
    // 30

    // ek saath memory mein nahi hain.

    // Alag alag jagah pade hain.
//     I don't care where memory is.
// Just give me the address.
// the whole thing about list is i don't care where the memory adress is or where the object lies. 
//  just give me adress !! i will point to other and create a sense of connection.

// location doesn't matter much 
//  connection matters the most
}