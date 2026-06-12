#include <iostream>
int main() {
    std::pair<std::string, int> student  {"Aditya" ,90};
    std::cout << student.first<<std::endl;
    // now there's one more way to get it out:
    std::cout << std::get<0>(student)<<std::endl; // it works as a index
}