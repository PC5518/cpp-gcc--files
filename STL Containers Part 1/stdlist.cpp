#include <iostream>
#include <list>
int main() {
    std::list<int> list = {1,2,3,4,5};
    // it's a doubled linked list
    // what exactly do i mean ??????
    // vector is like a continous memory:  [13] [34] [43] [45]
    // list : nullptr <- 10 <-> 20 <-> 30 <-> 40 -> nullptr
    // Each node stores:
    // Value
    // Previous pointer
    // Next pointer

    // why doubly ??????  
    // because it can move both forward and backward. std::forwar_list can only move forward.
    // they are two sided in nature . it's different from node.
    // #######################**********************************
    // Memory Layout

    // Vector:

    // [10][20][30][40]

    // List:

    // Node1 ----> Node2 ----> Node3
    // ^           ^           ^
    // |           |           |
    // Random places in memory

    // The nodes may be scattered all over RAM.

    // Big Disadvantage

    // Random access.

    // Vector:

    // v[5000]

    // ✅ Very fast.

    // List:

    // lst[5000]

    // ❌ Doesn't even exist.

    // Compiler error.

    // To reach element 5000:

    // 1 -> 2 -> 3 -> 4 -> ...

    // You must walk node by node.

    // Slow.

}