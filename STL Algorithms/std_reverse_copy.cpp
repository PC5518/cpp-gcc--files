#include <iostream>
#include <vector>
#include <algorithm>
// now reverse modify  karta tha but ye modify ahi karta hai. ye durse naye vector me copy kar deta hai.
int main() {
    std::vector<int>  v{24,2,242,3342};
    std::vector<int>  v2(v.size());
    std::reverse_copy(v.begin(), v.end(),v2.begin() );
    for (int i: v2)  {
        std::cout<< i<< " ";
    }

    std::cout<< " <-:now here's the reverse copy of v2" <<std::endl;
}