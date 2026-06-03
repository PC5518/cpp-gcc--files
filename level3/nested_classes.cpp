#include <iostream>
using namespace std;
class Company {
public:
    class  employee {
        public:    
            void hello() {
                cout<< "Hello Employee"<<endl;    
            }

    };
};

// now here are two things: 
// 1. You can create Employee under company or out side of Company (i mean  a separate employee class outside of company and later use it)
int main() {
    Company::employee e ;
    e.hello() ;
}
//  Important syntax:  Outer::inner obj; iska fayda organisation me bahot jyada hota hai
// literally pura map and database ka kaam kar rha hai.
// overall:  Nested class = class ek andar class ho tab.
// looks very useful 
// the only doubt ? 
// 