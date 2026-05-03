#include <iostream>
#include <vector>
// int main() {
//     std::vector<int> v1={1,2,3,4,4,5};
//     std::vector<int> v2=v1;
//     // copy ban gya yani double memory.
//     // toh is problem ko solve karne ke lite we use std::move
//     for (auto i:v2) {
//         std::cout<< i<<std::endl;
//     }
// }
int main(){
    std::vector<int> deva={1,34,24};
    std::vector<int> tranfer =std::move(deva);
    for (auto i: deva) {
        std::cout<< i <<" ";
    }
    for (auto j: tranfer) {
        std::cout<< j <<" ";
    }
}