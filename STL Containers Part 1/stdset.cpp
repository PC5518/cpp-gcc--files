#include <iostream>
#include <set>
// first of all it's very close to python's set
int main() {
    std::set<int> s= {1,23,2,343,2,3,2,24,2}; // in cpp the final set output is always sorted to default
    for (int i: s) {
        std::cout<<i << " ";
    }// so we can see that how the list being sorted and the duplicates are removed;
    std::cout<< " " <<std::endl;
    s.insert(10);
    for (int i: s) {
        std::cout<<i << " ";
    }// so we can see that how the list being sorted and the duplicates are removed;
    std::cout<< " " <<std::endl;
    std::cout<<"set has no indexing because it is not an array. it's an tree" <<std::endl;
    // now the biggest thing is that set is not an array . it's an tree. tree don't have element one two or .....
}
