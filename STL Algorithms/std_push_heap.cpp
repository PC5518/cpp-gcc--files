#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int>  v{2,3,4,33,4543,3};
    std::make_heap(v.begin(), v.end());
    v.push_back(1000);
    std::push_heap(v.begin(), v.end());
    
    // now the vector becomes heap again.
    for (int i:  v ) {
        std::cout<< i<< " ";
    }
    std::sort_heap(v.begin(), v.end());
    std::cout<<" " <<std::endl;
    for (int i:  v ) {
        std::cout<< i<< " ";
    }
// now ab isse heap structure khatma ho jata hai !

}


// now the biggest question is that why not std::sort??
// Iska jawab efficiency aur use case me hai. Agar aapke paas pehle se ek valid heap maujud hai, toh std::sort_heap() use karna behtar hota hai.
// std::sort_heap() is faster on a heap
// std::sort() is generic: std::sort() (jo internal IntroSort use karta hai) ko data ke structure ke baare me kuch nahi pata hota. Woh pure random data ko sort karne ke liye design kiya gaya hai, isliye woh heap par thoda zyada samay le sakta hai.