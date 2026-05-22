#include <iostream>
using namespace std;
//  there are two types of template
// fxn template eg.
template <typename a, typename b> 
void print(a value1, b value2) {
    cout << value1<<" " << value2<<endl;
}
int main() {
    print(2, std::string("deva"));
}