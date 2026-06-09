#include <iostream>
#include <list> // this is a not a  double linked list 
#include <forward_list>
// this is a single linked list
// node contains data prev pointer and next pointer. so basically we can go in both direction.
int main() {
    // forward list only has next pointer and data of the present index element.
    // you can move forward only
    // since the nide is smaler there's less memory.
    // now let's see the operations
    std::forward_list<int> frw = {1,243,13,33,2223};
    frw.push_front(10);
    for (int i :frw) {
        std::cout<<i  <<std::endl;
        std::cout<<"***************************************************"  <<std::endl;

    }
    std::forward_list<int> frw = {1,243,13,33,2223};
    frw.push_back(100000); /// why not this ???
    // because 10-> 20-> 30 
    // because 
    for (int i :frw) {
        std::cout<<i  <<std::endl;
        std::cout<<"***************************************************"  <<std::endl;        
    }
}