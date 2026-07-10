#include <iostream>
#include <vector>
#include <numeric>
int main() {
    // it means pehle transform karo then reduce
    // transform+reduce .  ye math algorithm dono process ko mila deta hai 

    std::vector<int>v{2,42,453};
    auto result= std::transform_reduce(v.begin(), v.end(),0,std::plus<>() ,[](int a) {
        return a*a;
    });
    std::cout<<result <<std::endl;
}
// this is the fxn signature:

// std::transform_reduce(
//     A.begin(),
//     A.end(),
//     B.begin(),
//     initial
// );