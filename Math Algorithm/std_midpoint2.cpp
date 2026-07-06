#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
int main() {
    int first =234;
    int last=244;
    int result =std::midpoint(first, last);
    std::cout<< result;
    // now this calculates the middpoiny and then take the absoulte value of the result.
    // it also avoids the overflow issue. like the need to write longlong and etc

    // why is this important????
    // when it comes to binary search log likhte hai:  mid =(low + high)/2;
    // fir overflows ka issue ata hai.
}