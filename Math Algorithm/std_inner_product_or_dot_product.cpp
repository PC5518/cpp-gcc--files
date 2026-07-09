#include <iostream>
#include <vector>
#include <numeric>
int main() {
    std::vector<int> vectora{1,3,5,12};
    std::vector<int> vectorb{6,7,1,3};
    std::vector<int> result_of_dot_product(vectora.size());
    int result =std::inner_product(vectora.begin() , vectora.end(), vectorb.begin(),0 );//  now why this zero ???  because it needs the starting point before running
    // Because std::inner_product is a "Reduce" operation, it needs a starting point before it can begin adding things up.
    std::cout<< result<<std::endl;//  if u wanna experiecne it just switcht the value to one you will see the result value increasing by 1
}