#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
// std::lerp means linear interpolation
// matlab ek point se dusre jagah kitna percent pohonch gye.
// Game development, graphics, animation, AI, physics... har jagah milta hai.
int main() {
    auto result= std::lerp(100.0,200.0,0.7); // it means that 0.7 part of between 100 to 200 pahunch kaha pahucha hai. is case me answer hoga 170.
    // computation logic:  200-100 =100  now (0.7*100)+100; i.e 170 
    // note: 170 is the output here. 
    std::cout << result;
    // format:
    // fxn signature:  std::lerp(start, end, t)

    // Ek interesting baat jo beginners miss kar dete hain

    // Bahut log sochte hain t sirf 0 se 1 ke beech hona chahiye.

    // Actually nahi.

    // t 1 se bada ya 0 se chhota bhi ho sakta hai.
}
