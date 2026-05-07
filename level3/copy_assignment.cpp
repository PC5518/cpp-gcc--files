

#include <iostream>
class car {
public:
    int code;
    int dob;
    std::string color;
};
int main() {
    car ford;
    ford.code=2345;
    ford.dob = 234;
    ford.color="Green";
    std::cout<<ford.color <<std::endl;
    
    // car tata=  ford;
    // std::cout<< tata.color<<std::endl;
    car tata;
    tata =ford; // alag tarike se.
    std::cout <<tata.color <<std::endl;
}//  NOW IF I WANNA COPY THE HYUNDAI AS BMW
// now it's like kaam wahi lekin timing ya tarika alag alag 
