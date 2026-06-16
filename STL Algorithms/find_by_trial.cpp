
#include <iostream>
#include <vector>
#include <algorithm>
int check(int x) {

    return x%2==0;
} // just trying using normal fxns
int main() {
    std::vector<int> v={2,3,2,24,5,22};
    auto it =  std::find_if(v.begin(), v.end(), check(*it)  );
    std::cout << *it << " whose index is " << (it- v.begin()) <<std::endl;
    // the core of this topic
    auto iterator = std::find_if(begin,end,predicate)
}