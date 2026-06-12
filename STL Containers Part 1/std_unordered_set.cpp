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
    std::cout<< uset.contains(20);
    // tree does go right and left.......
    // Hash table says:

    // 20
    // ↓
    // Hash(20)
    // ↓
    // it's there in Box 5 actuallly hash fxn ko formula pata hai . pata nahi rehta already.
    // ↓
    // Check Box 5
    // ↓
    // Found

    // Direct jump.

    for (int i: uset) {
        std::cout <<i <<std::endl;
    }
// *****************    // think of it like : 
    // Tree:
    // "Let's search." by the binary search tree left right method

    // Hash Table:
    // "I already know approximately where it is." or more accurately->  Let's calculate where to look.




    // what abouyt the fancy name bucket ??? forget it !!! just replace it with what i am comfortable it wit.
    // like slot storage box . anything i am comfortable with it.
    // how does hash fxn finds it out ????
    //  suppose the rule is Value % 10
    // and uset.insert(37);
    // then 37%10 is 7 therefore go to bucket 7
}