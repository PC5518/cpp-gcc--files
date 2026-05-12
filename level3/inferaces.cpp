#include <iostream>
class car {
public:

    virtual void printing() =0; //iska kaam hi hai pass hona and child ko dena task via ovverride
};
class ev: public car{
    void  printing() override {
        std::cout<<"We are printing under ev i.e child" <<std::endl;
    }
    //  yaha par jo karna hai wo karo 
};
int main() {

    car *bmwev = new ev();
    bmwev->printing();
}
// pure virtual function:
// child classes ko force karta hai
// ki ye function implement karna hi padega