#include <iostream>
#include <vector>
#include <numeric>
int main() {
    //  partial sum and adjacent difference ek dusre ke eexact opposite hai.
    // in this case it makes 
    std::vector<int> v{3,3,4,53,2,5,53};
    std::vector<int> result(v.size());
    std::partial_sum(v.begin(), v.end(), result.begin());
    for ( int i: result )  {
        std::cout<<i <<" ";
    }
    int sum=0 ;
    std::cout<< " "<<std::endl;
    // tthis is working rule of partial sum but it does throughout the sequence. it never forms the "pair" and then add.
    for (int i: v ) {
        sum = sum+i;
    }
    std::cout<< sum <<std::endl;
}