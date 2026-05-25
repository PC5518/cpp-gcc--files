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
//  next is the class based template
template <typename class_type, typename another_name>
class data {
public:
    class_type age;
    another_type id;
};
// basically let the compiler automatically decides the datatype presented in the code.
