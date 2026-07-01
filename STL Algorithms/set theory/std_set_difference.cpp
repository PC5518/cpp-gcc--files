#include <iostream>
#include <vector>
#include <algorithm>
int main() { 
    std::vector<int> seta{1,2,3,4,5};
    std::vector<int> setb{4,5,6,7};
    std::vector<int> result;
    std::set_difference(seta.begin(),  seta.end(), setb.begin(), setb.end(), std::back_inserter(result));
    for (int i: result) {
        std::cout << i<<std::endl;
    };
}
// we use std::backinserter to show jitna use utna hi dete (push_back) jao.
