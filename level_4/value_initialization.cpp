#include <iostream >
class index{
public:
    int market_cap{2005885};
    int profit{};
// {}->  means it's a default vvalue setter for a variable.
};
int main() {
    int x{};
    std::cout<< x<<std::endl;
    index nasdaq;
    std::cout<< nasdaq.profit <<std::endl;    
    std::cout <<nasdaq.market_cap <<std::endl;
}
// {} se value zero set ho jata hai
