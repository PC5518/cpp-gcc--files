#include <iostream>
#include <vector>
#include <algorithm>




int main() {
    std::vector<int> v={2,3,2,24,5,22};
    auto it =  std::find_if(v.begin(), v.end(),[](int x) {
        return x%2==0;
    }  );
    std::cout << *it << " whose index is " << (it- v.begin()) <<std::endl;
    // the only cons for this is that true milte hi ruk jayega. 
    // note: agar true case nahi milta hai toh v.end() return ho jata hai that is khali dabba []
}