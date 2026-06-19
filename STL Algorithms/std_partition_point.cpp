#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v{2,4,232,22,2,34,2,2};
    std::vector<int> v2{2 ,4 ,2, 2 ,34 ,2, 2, 3, 3 };
    auto point =std::partition_point(v2.begin(),v2.end(), [](int x) { return x%2==0;});
       // mujhe pata hai ki data partitioned hai . ab boundary batao

    std::cout<<*point;
}

// output: 
// 2 4 2 2 34 2 2 | 3 3
//                 ^
//               point