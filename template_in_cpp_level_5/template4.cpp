#include <iostream>
std::string add(std::string a, std::string b) {
    return a+b;
}
int main() {
    std::cout<<add("this is string one", "   this is string two") <<std::endl;
}// string add here just like python
// now this bar bar type change karna wala problem  can be solved by template
//  let's see how we can change the way into more productive manner.