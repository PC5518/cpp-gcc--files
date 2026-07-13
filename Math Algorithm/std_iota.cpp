#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
// basically iota takes an starting value and builds a sequence in a container.
int main() {
    // now we fill valuees in the traditonal form like this;
    std::vector<int>  v(4);
    std::cout<< v.size()<<std::endl;
    for (int i=0;  i<v.size(); i++) {
        v[i]=3;
    }
    for (int i:v) {
        std::cout<<i << " ";
    };
    // now the next method is to use the std::generate
    int number=0;
    std::generate(v.begin(), v.end(), [&number]() {
        number++;
        return number;
    });
    std::cout<< " "<< std::endl;
    for (int i:v) {
        std::cout<<i << " ";
    };
    // now the next method by numeric header is 
    std::iota(v.begin(), v.end(), 1);
    for (int i:v) {
        std::cout<<i << " ";
    };
    // this will print like 1, 2, 3, 4 like this ..... 
    // iski property hai ki ye ek baar se aage badhega 
    
}
