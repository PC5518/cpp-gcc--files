#include <iostream>
#include <vector>
#include <algorithm>
// now ye bohot simple hai !
// ye partition nahi karta hai ; ye sirf puchta hai ki pehle se hi partioned hai ?
int main() {
    std::vector<int> v{2,5,3,2,4,2,3,24,2,3};
    std::vector<int> v2{2 ,4 ,2, 2 ,34 ,2, 2, 3, 3 };
    bool answer= std::is_partitioned(v.end(), v.begin(), [](int x ) {
        return x%2==0;
    });
    std::cout<<answer;
    std::cout<<" " <<std::endl;
    bool answer2= std::is_partitioned(v2.end(), v2.begin(), [](int x ) {
        return x%2==0;
    });
    std::cout<<answer2;
    
}   