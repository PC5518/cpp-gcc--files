#include <iostream>
int main() {
    int&& move=839;
    // this move has no adress
    std::cout<<move <<std::endl;
    std::cout<<(void*)&move <<std::endl;
    5665;

    
}
// Do tarah ke references hain:
// &  = lvalue reference  → cover se attach
// && = rvalue reference  → data se attach
// //+++==================================================
// lvalue ⊃ rvalue

// lvalue = address + data — full package 📦 int& new =x;
// rvalue = sirf data — half package 📦 int&& reff =234;
// rvalue i.e && ka koi bhi address nahi hota hai
// ram me koi jagah nahi hoti hai isiliye temporary hota hai.
// therefore && has no adress and temporary
//===============================================
// Abhi ke liye bas itna yaad rakho:
// lvalue  = permanent — naam + address ✅
// rvalue  = temporary — sirf data ✅
// &       = lvalue pakdo
// &&      = rvalue pakdo — std::move mein kaam aayega!
