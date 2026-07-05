#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    int mid=std::midpoint(8,13); // it will take the greatest intger fxn after evaluating the (a+b)/2
    std::cout<<mid <<std::endl;
    std::cout<< "Mathematical midpoint(GIF): \((8 + 13) / 2 = 21 / 2 = 10.5)Rounding direction: Rounded toward";
}
