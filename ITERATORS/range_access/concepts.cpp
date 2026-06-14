#include <iostream>
#include <list>
#include <vector>
int main() {
    std::vector<int> v={10,20,30};
    auto it =v.begin();
    auto it2= v.end();
    std::cout <<*it2 <<std::endl;
    std::cout << "***************************************************************************************************" <<std::endl;
    // now it2 is  now giving the last element because because the last element in the vector array is null. now why ??? because it helps a lot:
    for (int i:  v) {
        std::cout<< i <<std::endl;
    }
    for (int i=400; i<500;i++  ) {
        std::cout<< i<<std::endl;
    }

    std::cout << "***************************************************************************************************" <<std::endl;
    for (auto i =v.begin(); i!=v.end();++i ) {
        std::cout<<*i <<std::endl;
    }
    std::cout << "***************************************************************************************************" <<std::endl;
    std::list<int> l{2,32,34,234,23,4};
    for (int i: l) {
        std::cout<< i<<std::endl;
    }

    std::cout << "***************************************************************************************************" <<std::endl;
    std::vector<int> sample={2,2,32,24,43,23,4};
    auto cit =sample.cbegin();
    // now this will never alow to change the data via this iterator like *cit =23;
    // same for .cend
    

}

