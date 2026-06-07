#include <iostream>
#include <vector>
// why vector exist : old styled c list had {1,2,3,4,5} the size remain the fix, we cannot add another fxns.
// the scientist needs were that we want array jaisa fast structure but also needed the feature to increase size .
int main() {
    std::vector<int> vector_list={1,1,3,4,22,323,34,3};
    vector_list.push_back(10);
    // therefore we can add elements
    for (int i: vector_list) {
        std::cout<< i<<std::endl;
    }
    std::cout<< "the vector size is "<< vector_list.size() <<std::endl; // now the .size() fxns differ from that of array as it can also change on the runtime it means they are dynamic and not statics as array.
    // we can think vector as a resizable array.
    std::cout <<vector_list[5] <<std::endl;
    // it's accesible
    std::cout<< "the first element with the index zero is " << vector_list.front()<<std::endl; // now this can be used to get the front or the very first or the element with index zero (0);
    std::cout<<"the last element of the vector is " <<vector_list.back()<<std::endl;
}