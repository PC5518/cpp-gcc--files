// the tree shape depends upon the insertion order
// suppose
#include <iostream>
#include <set>
int main() {
    std::set<int > set ;
    set.insert(30);
    set.insert(20);
    set.insert(50);
    set.insert(10);
    set.insert(40);
    for (int i: set ) {
        std::cout<< i << " ";
    }
    std::cout <<" " <<std::endl;
}
// Let's build it manually.

// Insert:

// 30

// Tree:

// 30

// Insert:

// 20

// Compare:

// 20 < 30

// Rule says:

// Smaller goes left ->  this is very much important rule of a tree formation

// Tree:

//     30
//    /
//  20

// Insert:

// 50

// Compare:

// 50 > 30

// Rule:

// Bigger goes right

// Tree:

//     30
//    /  \
//  20    50

// Insert:

// 10

// Compare with 30:

// 10 < 30

// Go left.

// Now compare with 20:

// 10 < 20

// Go left again.

// Tree:

//       30
//      /  \
//    20    50
//   /
// 10

// Insert:

// 40

// Compare with 30:

// 40 > 30

// Go right.

// Now compare with 50:

// 40 < 50

// Go left.

// Tree:

//       30
//      /  \
//    20    50
//   /      /
// 10      40

// 😄 Notice something?

// Nobody sat down and "designed" this tree.

// The shape emerged automatically from:
// ######################################################################################
// this is the ultimate rule of tree formation: 
// Insert value
// ↓
// Compare
// ↓
// Go left or right
// ↓
// Repeat

// Now imagine inserting:

// 10
// 20
// 30
// 40
// 50

// only.

// Then you'd get:

// 10
//   \
//    20
//      \
//       30
//         \
//          40
//            \
//             50

// Which is terrible.

// A crooked tree.

// That's why real std::set implementations use:

// Red-Black Trees

// which automatically rebalance themselves.

// You don't need to learn that now.

// Just know:

// Normal BST
// =
// Can become ugly

// std::set
// =
// Keeps itself balanced

// 🎯 The key insight you're missing is:

// A tree is not manually arranged.

// Each new value asks: -> this is the important step.

// Am I smaller?
// → Go left

// Am I larger?
// → Go right

// and eventually finds an empty spot.

// That's why the tree grows into its shape.

// Once you understand that, the search logic suddenly becomes obvious:

// Need 40?

// 30 → right
// 50 → left
// 40 → found

// The tree itself is guiding you. That's the beauty of it. 🌳🚀