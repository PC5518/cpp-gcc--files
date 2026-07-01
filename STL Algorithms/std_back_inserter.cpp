#include <iostream>
#include <vector>
#include <algorithm>
int main() { 
    std::vector<int>  vec;
    auto it=  std::back_inserter(vec);
    int i=1;
    for (  i<5; i++;) {
        *it=3;
    };
    for (int i:  vec) {
        std::cout<< i<< " ";
    }
}
// we use std::backinserter to show jitna use utna hi dete (push_back) jao.
// vec.push_back(3);
// vec.push_back(6);
// vec.push_back(9);
// vec.push_back(12);
// this is the backend proccess 