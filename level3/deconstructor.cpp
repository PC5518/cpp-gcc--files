#include <iostream>
//  constructor ka kaam hota hai class ke andar present variables ki default values set karna
// constructor== setting defaults value
class car {
public:
    int code;
    int dob;
    std::string color;
    car() {
        code =0;// yaha code ya ford kisi bhi car ko default value milli 
        dob= 0;
        std::cout<<"Car ban gya" <<std::endl;
    

    }
    ~car() {
        std::cout<<"Car delete ho gyi " <<std::endl;
    }
};
int main() {
    car ford;
    std::cout<<ford.code <<std::endl;
}//-> deconstructor yaha call hoga
// -> ye khali ford ka cleanup karega
// baki ke code par koi asar nahi hoga
// Constructor = Factory default settings 🏭
// =========================================================
// Destructor = RAM khali karna!
// Object bana    → RAM li ✅
// Object khatam  → RAM wapas karo ✅
//                → Destructor karta hai yeh kaam!
// =========================================================