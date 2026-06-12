#include <iostream>
#include <unordered_set>
int main() {
    // now in set the ordered is always sorted but it's something different
    // nobody promises order. why????
    // because it does not use a tree.
    // instead it uses a hash table.
    std::unordered_set<int> uset;
// internally this happens (just random boxes)
// [0]
// [1]
// [2]
// [3]
// [4]
// [5]
// [6]
// [7]
    uset.insert(10);
    // now the computer asks where should this 10 go????
    // the hash fxn answers : in [3]
    // again 
    uset.insert(20);
    // now the computer asks where should this 20 go????
    // the hash fxn answers : in [5]
    // again 
    // therefore [5]->20 & [3]->10
    uset.insert(30);
    // now the computer asks where should this 30 go????
    // the hash fxn answers : in [2]
    // again 
    // therefore [5]->20 & [3]->10 & [2]->30
    // finally this is the condition of the hastable where [] is the bucket
    // [2] -> 30

    // [3] -> 10

    // [5] -> 20   
    std::cout<< uset.contains(10);

}