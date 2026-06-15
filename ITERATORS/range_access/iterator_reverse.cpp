#include <iostream>
#include <vector>
using std::cout; 
using std::endl; 
int main() {
    std::vector<int>  v=  {2,23,2,24,2322};
    auto rit=  v.rbegin(); // start from 2322 and will consider it as a beginning.
    for (auto i = v.rbegin(); i != v.rend();++i ) { // loop says initital condtion and condition to end the loop.
        cout<<*i << " ";
    }
    // 2322 24 2 23 2  now the iterator will see like this.
// and when combine both const and reverse we get crbegin and crend
}