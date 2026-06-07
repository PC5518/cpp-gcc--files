#include <iostream>
// so let's begin with stl 
// standard template library

// Ye C++ ki ready-made library hai.

// Socho tumhe:

// Array
// Linked List
// Queue
// Stack
// Map
// Sorting
// Searching

//  noww here we are not required to develop an algorithm and use it for things like sorting, searching linkedlist , array, stack,  map. queue etc.
//  stl provides the solutions to these things just as zensar technologies, newgen tech, etc.....  like indian it companies . haha just joking 😀

// iterators are the way to explore the container : list me ghumne ka pranali(method) hai


// all about stl:
// Most Important STL Idea

// C++ designers ne bahut intelligent kaam kiya.

// Unhone:

// Container

// ko separate rakha.

// Aur:

// Algorithm

// ko separate rakha.

// Example:

// std::vector<int> v;

// Container.

// std::sort(...)

// Algorithm.

// Sort ko vector ke andar nahi dala.

// Sort ek independent tool hai.

// Isi liye:

// vector
// array
// deque

// sab par kaam kar sakta hai.

// Real Example
// std::vector<int> v = {5,2,9,1};

// Store data.

// std::sort(v.begin(), v.end());

// Sort data.

// Yahan:

// vector
// ↓
// Container

// begin/end
// ↓
// Iterator

// sort
// ↓
// Algorithm

// Ye STL ka poora architecture hai.
//  and this was really a genius way to design. now tools like sort and other can be used independently