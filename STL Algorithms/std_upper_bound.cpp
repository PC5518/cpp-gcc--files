#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v{2,3,234,445,645,899};
    for (int i:v ){
        std::cout<<i << " ";
    };
    std::cout<<" " << std::endl;
    auto it= std::lower_bound(v.begin(), v.end(), 645);
    std::cout<<*it <<std::endl;
    // now this lower bound mean >=
    // now this will return the iterator element of the container which is greater than equal to the provided value like her for 4 we got 5.
    std::vector<int>    array{2,3,4,5,6,7,89,666};
    auto iterator =  std::upper_bound(array.begin(),array.end(),4);
    std::cout<< *iterator<<std::endl;

    // now this lower bound mean  >  strictly
    // now this will return the iterator element of the container which is greater than the provided value like her for 4 we got 5  
}