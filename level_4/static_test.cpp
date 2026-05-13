// achha ek baat hmko samjh em aaya ki stack and heap me ek cheez common hai ki data ka existenacce only {} braces yaa scope tak hi rahta hai;
#include <iostream>
using namespace std;
void tester() {
    int *deva = new int(0);
    (*deva)++;
    cout<<(*deva ) << endl;
}
int main() {
    tester() ;
    tester() ;
    tester() ;
    tester() ;
    tester() ;
    tester() ;
}