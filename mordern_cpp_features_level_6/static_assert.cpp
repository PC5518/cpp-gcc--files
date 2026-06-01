#include <iostream>
#include <cassert>

int main() {
    int age=-7;
    static_assert(age>=0);
//  the only difference is that  it will run at the time of compilation only. 
// that the main difference of proccessing and working
} 
// now at the time of compilation the compiler still lacks the knowledge of whethere age is existing or not.
//  therefore hame at the time of compile time hi age ka data dena hoga jiske bare me condtion bataya gya hai .
