#include <iostream>
#include <vector >
int main() { 
    std::vector<int> deva = {1,2,8,2};
    std::fill(deva.begin(), deva.end() , 2008 );
    for (auto x: deva) {
        std::cout<<x <<std::endl;    
    }
}
