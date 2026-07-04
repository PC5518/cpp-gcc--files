#include <iostream>
#include <vector>
#include <algorithm>
// std::minmax in C++ returns a std::pair where the first element is the minimum and the second element is the maximum.
int main() {
    auto p=  std::minmax(15,9, [](int a,  int b ) {
        return a<b;
    }); 
    std::cout<< p.first<<std::endl ;
} 
// if (a<b)  then 
// class a {
//     int first=a;
//     int second=b ;
// }