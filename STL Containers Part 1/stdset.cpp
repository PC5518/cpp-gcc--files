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
    // that's the main reason we don't use syntax like push_back or front or index it or popback or front 
    s.erase(23);
    // this is possible only one 23 will be there and if yes then it will erase it.
    for (int i  :  s) {
        std::cout<< i<< " ";
    }
    std::cout<<" "<<std::endl;
    // auto it=  s.find(10);
    // std::cout << it<<std::endl;
    std::cout <<"" <<std::endl;
    if (s.contains(10)) { // here s.contains(10) means 1 if true and 0 means false. so if true is the output compiler will go witht the if ellse positon.
        std::cout<< "yes it exist "<<std::endl;
    }
    std::cout<<s.contains(343) << " this means true if spoken in python form. "<<std::endl;
    
}

