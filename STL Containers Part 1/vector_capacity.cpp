#include <iostream>
#include <vector>
int main() { 
    std::vector<int> v = {1,2,3,45,6}; 
    std::cout<<v.capacity() <<std::endl; // vector capacity is measured in elements rather than bits or bytes
    v.push_back(10); // the compiler adds 5 blocks extra i.e double the previous capacity
    std::cout<<v.capacity() <<std::endl;
    v.push_back(10); // 2nd item which is being added here and still 2 can be added more . after 5 are utilised again we have ccapcity 10 and size also 10 therefore 10 more will be added for future elements that will be added.
    std::cout<<v.capacity() <<std::endl;
    // now i know that i will store about 1000 more elements in the future then i will reserve that memory in advance. 
    // that's an excellent optimisation approach via reserb
    v.reserve(100);
}
// ye jyada de deta in advance ki taki bar bar memory mangna naa pade.