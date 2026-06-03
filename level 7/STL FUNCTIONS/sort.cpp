#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> array ={1,882,5,2,56,5500,4};
    sort(array.begin(), array.end()); // begin and end means vector ke first and end element ki position.
    //  so fxn is sorted
    for (int i :  array) {
        cout<< i
        <<" ";
    }
    cout<< " " <<endl;
    cout<< array.size();
}