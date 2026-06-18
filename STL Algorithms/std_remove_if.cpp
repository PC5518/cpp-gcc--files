#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int>  v{2,33,3,42,2,2};
    auto removed_data_iterator= std::remove_if(v.begin(), v.end(), [](int a) {
        return a%2==0;
    });
    // now it pointer point karega at 2 42 2 2 and ye data structure arrage kar dene ke baad wala store karta hai that's why v.erase(iterator to end) kaam kar deta hai.
    for (int i:  v)  {
        std::cout<<i  << " "; 
    }   std::cout<<*removed_data_iterator<<std::endl;
    ++removed_data_iterator;
    std::cout<<*removed_data_iterator<<std::endl;
    v.erase(removed_data_iterator, v.end());// it mean it se start karo and end tak .(waise bhi sure hai ki)
    for (int i:  v)  {
        std::cout<<i  << " "; 
    }
}
// 33 3 | ? ? ? ?
//       ^
//       it