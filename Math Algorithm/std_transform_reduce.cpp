#include <iostream>
#include <vector>
#include <numeric>
int main() {
    // it means pehle transform karo then reduce
    // transform+reduce .  ye math algorithm dono process ko mila deta hai 

    std::vector<int>v{2,42,453};
    auto result= std::transform_reduce(v.begin(), v.end(),0, [](int a) {
        return a*a;
    });
    std::cout<<result <<std::endl;
}