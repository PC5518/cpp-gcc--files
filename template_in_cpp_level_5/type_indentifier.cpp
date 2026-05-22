#include <iostream>
using namespace std;
template <typename type>
void detect(type a) {
    cout<<a  << "is in the domain"<<endl;
}
template<>
void detect<int>(int value) {
    cout<<value<< " is not  in domain and it's an integer" <<endl;
}
int main() {
    detect(23);
}