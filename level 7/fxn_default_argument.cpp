#include <iostream>
using std::cout;
using std::endl;
void print(std::string input ="default input was printed on the console") {
    cout<<input <<endl;
}
int main() {
    print("user input");
    print();
}