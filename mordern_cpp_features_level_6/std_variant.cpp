#include <iostream>
#include <variant>
std::variant<int, float> data;
union data
{
    int number;
    float value;
};
// now the problem is that union stores the memory in form of bits but not the datatype. so it does not store the dattype along with it.
// that's why std::variant is used.
// so here's the mordern c++  solution. 
int main(){ 
    data random;
    random.number=521;
    std::cout<< random.number<<std::endl;
}   