#include <iostream>
#include <list>
// the most important fact about list we cannot access the elements via index !
// for example: list[23] innaccesible
int main() {
    std::list<int> lst={1,4,24,2,242};
    lst.push_back(10); // push_front in similar form
    for (int i: lst) {
        std::cout<< i <<std::endl;
        // 10 <-> 20 <-> 30<-> new node 
        // internally
    }
    std::cout<<"*********************" <<std::endl;
    lst.pop_back() ;
    // the last node is destroyed
    for (int i: lst) {
        std::cout<< i <<std::endl;
    }
    // similarly ppop front
    lst.pop_front();
    std::cout<<"*********************" <<std::endl;
    lst.pop_back() ;
    // the last node is destroyed
    for (int i: lst) {
        std::cout<< i <<std::endl;
    }
    std::cout<<"*********************" <<std::endl;
    lst.push_front(10) ;
    // the last node is destroyed
    for (int i: lst) {
        std::cout<< i <<std::endl;
    }   std::cout<< "the inital node data of then list is: "<< lst.front() << std::endl;

    std::cout<< "the last node data of then list is: "<< lst.back() << std::endl; //
}