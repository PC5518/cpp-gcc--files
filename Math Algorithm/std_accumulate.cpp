// std::accumulate() is one of the Top 10 most used STL algorithms. CP very important! 
// std::accumulate: ka ek hi kaam hai:  collect karte jao and jodte jao and iska sum hi answer hai
// it's basically the summation of all the elements it achieves it by basic iteraion across the elements of the container?
// comes under header numeric 
#include <iostream>
#include <vector>
#include <numeric>
int main() {
    std::vector<int> v{3,43,3,43};
    std::vector<int> result(v.size());
    auto summation=  std::accumulate(v.begin(), v.end(),0);   // this zero points towars the innital value 
    std::cout<<  summation ;
    std::cout<< " " <<std::endl;
    // can also see it by  partial sum 
    std::partial_sum(v.begin(), v.end(), result.begin());
    for (int i:result ) {
        std::cout<<i<<" ";
    }
    std::cout<< " "<<std::endl;
    std::cout<< *(result.end()-1) <<std::endl; // same result but different approach 

}