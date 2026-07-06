#include <iostream>
#include <vector>
#include <algorithm>


#include <numeric>
int main() {
    int arr[]= {37,4,2,4356322,33};
    int* ptr1=  arr;

    int* ptr2=  arr+4;
    int result = std::midpoint(*ptr1 , *ptr2);
    std::cout<<result <<std::endl;
}