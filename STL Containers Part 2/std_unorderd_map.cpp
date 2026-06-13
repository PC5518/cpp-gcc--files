#include <iostream>
#include <functional>
int main() {
    // now here we don't care about sorting but more for speed then  we go to unordered map
    std::unordered_map<std::string,int > data= {{"deva" ,28}, {"anscom",100}};
    for (auto& i : data) {
        std::cout << i.first<< " : "<<i.second  << std::endl;
    }// now since the output is not sorted doesn't means that it is wrong to besaid that it's sorted. 
    // it's neither random neither directional.
    if (data.contains("anscom"))  {
        std::cout << "yes it exist"<<std::endl;
    }
    data.find("anscom");
    std::cout<<data.size() <<std::endl;
    data["answer"]=234;
    data.erase("answer");
    std::cout<<"********************************" <<std::endl;
    for (auto& i : data) {
        std::cout << i.first<< " : "<<i.second  << std::endl;
    }// now since the output is not sorted doesn't means that it is wrong to besaid that it's sorted. 
}