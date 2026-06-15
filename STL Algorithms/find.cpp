#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v={10,20,30,40};
    auto it = std::find(v.begin(), v.end(), 30);
    std::cout << (void*)&it<<std::endl;
    // WARNIG:  THE ADRESS WHICH IS BEIGN PRINTED IS THE ADRESS OF THE ITERATOR ITSELF, NOT 30.
    // overall find is used to handle a value
    if (it != v.end()) {
        std::cout <<"Found" <<std::endl;
    } // to check whether the value exist in the container or not.

    // other uses include is to find the position of the value:
    std::cout << (it-v.begin()); // subtracting two iterator provides the distance between them.

    // other use include is to erase it:
    v.erase(it); // again an iterator type  // now this is very important


}