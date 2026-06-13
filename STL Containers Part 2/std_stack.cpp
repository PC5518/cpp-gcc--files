#include <iostream>
#include <stack>
int main() {
    // std::stack<int> sample={1,3,2,3,3}; // this is wrong as initialisation is not supported in stack.

    std::stack<int> sample;
    sample.push(10);
    sample.push(23);
    sample.push(2342);
    sample.push(243);
    sample.push(13);
    std::cout<< sample.top()<< std::endl;
    sample.pop();

    std::cout<< sample.top();
    // now thisn is  how stack work on the last in first out rule which is called "LIFO"
    
}