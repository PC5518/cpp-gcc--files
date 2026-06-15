#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v={10,20,30,40};
    auto it = std::find(v.begin(), v.end(), 30);
    std::cout << (void*)&it<<std::endl;
    // WARNIG:  THE ADRESS WHICH IS BEIGN PRINTED IS THE ADRESS OF THE ITERATOR ITSELF, NOT 30.
    // overall find is used to handle a value
}