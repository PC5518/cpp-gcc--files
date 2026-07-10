#include <iostream>
#include <vector>
#include <numeric>
int main() {
    // it means pehle transform karo then reduce
    // transform+reduce .  ye math algorithm dono process ko mila deta hai 

    std::vector<int>v{2,42,453};
    auto result= std::transform_reduce(v.begin(), v.end(),0,std::plus<>() ,[](int a) {
        return a*a;  // this zero signifies the inital values.
    });
    std::cout<<result <<std::endl;
}
// std::plus<>(): reality :Ye sirf ek function object (functor) hai jo + operator ko represent karta hai.
// now attention: ye do stl algorithm jod rha hai naa ki operators like.
// this is the fxn signature: Ye batata hai ki transform ke baad values ko reduce kaise karna hai.

// std::transform_reduce(
//     A.begin(),
//     A.end(),
//     B.begin(),
//     initial
// );