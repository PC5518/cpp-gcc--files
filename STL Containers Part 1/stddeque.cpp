#include <iostream>
#include <deque>
#include <vector>

int main() {
    std::deque<int> list= {1,2,342,23};
    // now the main problem with vector is that addign at the back is very easy but when requied to add on the front it can be really ram and memory consuming that is adding in the front means pushing the other elements to the right. 
    std::vector<int> v={2,2342,223,2,23,42,2,3,2};
    v.insert(v.begin(),  5);
    for (int i: v) {
        std::cout <<i << " ";
    }
    // now here every  intger is shifted to the right. and this is a problem as it consumes ram.  
    std::cout<< " "<<std::endl;
    
    std::cout<<v.size() <<std::endl;
    // now what e required was that i want a vector like indexing, push_front and push_back;
    std::deque<int> d;
    d.push_back(101);
    d.push_front(1);
    // but how does it makes the push_front faster;
    // so the thing is that  don't think is that it's an one giant array;
    // imagine several small arrays 
    // block a {1,2}; block b {5,24}; and so on .....
    // now how's these blocks are connected in a deque ????
    // first of all there's not any pointer as deque is not a linked list. 
    // it's connected by the concept of map. we will learn it soon
    // so the thing is that it has a fast both push front and back
    // what if      deque becomes full or large????
    // it automatically again forms more blocks in it .
    for (int i: d) {
        std::cout<< i<< " ";
    }
    std::cout<<" " <<std::endl ;
    std::cout<< d[1]<<std::endl;
}