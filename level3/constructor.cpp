#include <iostream>
//  constructor ka kaam hota hai class ke andar present variables ki default values set karna
// constructor== setting defaults value
class car {
public:
    int code;
    int dob;
    std::string color;
    car() {
        code =0;
        dob= 0;
        std::cout<<"Car ban gya" <<std::endl;
    }
};
int main() {
    car ford;
    std::cout<<ford.code <<std::endl;
}
// Constructor = Factory default settings 🏭
//             = Default value set karna ✅