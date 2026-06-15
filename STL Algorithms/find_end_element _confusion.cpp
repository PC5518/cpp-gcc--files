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
    } 
    // to check whether the value exist in the container or not.
    //  let's understand why i did this.
    // Search failed? std::find() returns v.end().
    // So if(it != v.end()) means the value was found.
    // you  can check it by this : 
    auto finder =std::find(v.begin(), v.end(), 100);
    std::cout<< *v.end()<<std::endl;
}
logic:-> // jab value find fxn ko nahi milti toh auto it me last ki empty value (i.e v.end()) iterator me return kar deta hai . i.e last ke element ke baad wali khali jagah