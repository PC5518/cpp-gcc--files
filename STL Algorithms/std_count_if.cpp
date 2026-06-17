#include <iostream>
#include <vector>
#include <algorithm>
// to find the occurence of the number or a elment satifying a conditon
int main() {
    std::vector<int> v{1,3,2,5,5,63,3};
    //  NOW THE RETURN VALUE IS AGAIN INTEGER BUT WITH CONDITOON APPLICABLE FOR THE KHALI JAGAH 
    int counting  = std::count_if(v.begin(), v.end() , [](int a) {
        return a%2==0;
    });
    std::cout <<counting <<std::endl;
    
}