#include <iostream>
#include <vector>
#include <algorithm>
// Realisation: lambda bhi har ek stl algo kaa alag alag hota hai !!!!!
// for eg:  yaha pe lambda parameters aaccept nahi karta hai 
int main() {
    std::vector<int> v(5);
    int x=0;
    std::generate(v.begin(), v.end(), [&x]{
        x++;
        return  x;
    });
    for (int i:v ) {
        std::cout<<i << " ";
    }
}