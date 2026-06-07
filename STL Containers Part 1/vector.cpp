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

}