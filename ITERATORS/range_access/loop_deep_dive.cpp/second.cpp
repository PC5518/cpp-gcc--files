#include <iostream>
#include <list>
#include <vector>
using std::cout;
using std::endl;
int main() {
    std::vector<int> v= {2,34,623,32,4213,564,3};
    // cout<< v.size()<< endl;
    int j=0;
    for (int i: v) {
        j++;
        if (j== 4) {
            break;
        } else {
            std::cout<< i<<std::endl;
        }
    }
}