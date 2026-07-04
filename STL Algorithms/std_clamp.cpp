#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    // now std clamp normal human behaviour karta hai 
    // let's say i defined the range to be between 10 and 20 the 
    auto result=  std::clamp(11,10,20);
    std::cout<<result <<std::endl;
    auto result2=  std::clamp(1122,10,20);
    std::cout<<result2 <<std::endl;
    auto result3=  std::clamp(1,10,20);
    std::cout<<result3 <<std::endl;

// i got it!!! just a clamp behaviour to be kept in mind !!!
}