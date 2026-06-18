#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v = {10,20,30,20,40};
    auto data= std::remove(v.begin(), v.end(), 20); // returns an iterator
    // std::cout <<*data <<std::endl;
    // so we use std::erase 
    v.erase(data, v.end());


    for (int i: v) {
        std::cout<< i << " ";
    } // expected output:  10,20,20,40,?   -> jo value bach gya usko khiska ke aage la deta hai. 
    // output on compiler: 10 20 20 40 40   now ye 40 ek galat output toh nahi hai but also kaam ka bhi nahi hai.
    // valid but meaningless
    //  actually ye purani memory me pada hua hai jo ki overight nahi hua.

}
// now this std::remove algorithm removes the element but the size still remains same;
// why???
// practically: 
// v=  {10,20,30,40,20}
// std::remove(v.begin(), v.end(),20);
//  10,30,40,0,0  therefore the size remains the same.
//  basically jo elements bach gye unhe front me lete aao/  like 40 30 etc
//  result roughly:  10,30,40,?,?
//  yahan ?? ki value par bharosa nhi karna chahiye.