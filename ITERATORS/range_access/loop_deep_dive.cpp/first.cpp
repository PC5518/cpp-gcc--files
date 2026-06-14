#include <iostream>
#include <list>
#include <vector>
using std::cout;
using std::endl;
int main() {
    std::vector<int> v= {2,34,623,32,4213,564,3};
    // cout<< v.size()<< endl;
    auto it = v.begin();
    for (int  i= 1 ; i< 5; i++) {
        std::cout<<*it <<std::endl;
        ++it;

    } 

}