#include <iostream>
#define pi =23;

int main() {
#ifdef pi 
    std::cout <<"hi there" <<std::endl;
#endif   //  endif matlab yaha par mera mera #ifdef and #if block end ho rha hai.
// iske baad kuch nahi aana chahiye
#ifdef pi          // "if pi is defined" — block SHURU
    std::cout << "hi there";
#endif             // "end + if" — matlab "yeh IF block yahan KHATAM"
}