// achha ek baat hmko samjh em aaya ki stack and heap me ek cheez common hai ki data ka existenacce only {} braces yaa scope tak hi rahta hai;
//  lekin ye galat hai actialy Every call:

// new int(0)

// creates:

// NEW heap memory

// like:

// memory block A
// memory block B
// memory block C
#include <iostream>
using namespace std;
void tester() {
    int *deva = new int(0);
    (*deva)++;
    cout<<(deva ) <<" " << (*deva)<< endl;
}
int main() {
    int *deva = new int(0);
    tester() ; // all different heaps are created with different adress and 
    tester() ;
    tester() ;
    tester() ;
    tester() ;
    tester() ;
}
