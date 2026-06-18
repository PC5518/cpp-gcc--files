#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v{2,3,343,2,4,33,22};
    // toh dikkat kya hua:
    // "Humne itne saalon tak logon ko
    // remove + erase
    // likhvaya hai.

    // Chalo thoda insaniyat dikhate hain."


    // old method: 
    v.erase(std::remove(v.begin(),  v.end(),  2),v.end());// now this std::remove cosidt of the iterator that is to be deleted and till end it deleted and performed the action .
    // new introduction to std::erase to solve the problem
    std::erase(v, 2);
    for (int i: v ) {
        std::cout<< i <<  "  ";  
    }
}