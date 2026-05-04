#include <iostream>
void myfucntion() {
    int deva =273;
    auto p=  std::make_unique<int>(deva);
    std::cout<<*p <<std::endl;
}
int main() {
    myfucntion(); //
    myfucntion();
} // <- jaise hi scope aaya unique pointer pura khatam, even adress bhi shred ho jata hai.
//  normal pointer me adress delete ke baad bhi rah jata hai
// that's why unique pointer is the best.
