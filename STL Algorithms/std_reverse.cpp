#include <iostream>
#include <vector>
#include <algorithm>
// Realisation: lambda bhi har ek stl algo kaa alag alag hota hai !!!!!
// for eg:  yaha pe lambda parameters aaccept nahi karta hai 
int main() {
    std::vector<int> v{1,3,3443,4,2,3,42};
    std::reverse(v.begin(),v.end() );
    // now the most important part is that these fxn modify the container. they don't return something
    for (int i:  v) {
        std::cout<<i <<" ";
        // the array is reversed.
    }
}



// std::generate_n(
//     start_iterator,
//     count,
//     generator
// );