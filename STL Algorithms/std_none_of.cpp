#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> v{2,2,34,652,32,2123};
    bool var=  std::none_of(v.begin(), v.end(), [](int a) {
        return a%2!=0;
    });
    // Method 2: Move the Taskbar to the Top or Sides (Third-Party)
    // desi langauge: "Kya sab fail hain?"
    std::cout << var <<std::endl;
}