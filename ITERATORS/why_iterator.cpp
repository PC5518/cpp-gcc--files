#include <iostream>
#include <list>
int main() {
    std::list<int> l={1,343,2343,2343,43,3,3342,343,2,4};
    l.push_back(10);
    std::cout<< l.size()<<std::endl;
    // noww to go from 1 to 10 i will be required to go throuhg all if i want to achive it.
    // iterator provides the solution to direct jump.
    //  like it + 10; and done
}