#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v{4,1,8,2,7,3,5};
    std::make_heap(v.begin(),  v.end());

    for (int i: v) {
        std::cout<<i <<" ";
    }
}
// Ab vector internally arrange hoga as a max heap.

// Example output

// 8 7 5 2 1 3 4

// Dhyan do.

// Ye sorted nahi hai.

// Bas heap property satisfy karta hai.

// Visual tree

//         8
//       /   \
//      7     5
//     / \   / \
//    2  1  3  4

// Notice

// Har parent

// >= children

// Bas itna hi guarantee hai.

// Heap property
// Parent >= Left child

// Parent >= Right child

// Bas.

// Aur kuch guarantee nahi.