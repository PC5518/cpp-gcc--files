#include <iostream>
class car {
public:

    virtual void printing() {
        std::cout<<"we are under the parent fxn" <<std::endl;
    }; //iska kaam hi hai pass hona and child ko dena task via ovverride
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
    // inheritance ki wajah se child object ke andar parent part physically present hota hai,
// isliye parent pointer safely child object ko point kar sakta hai,
// aur virtual runtime pe actual child behavior ko activate karta hai.
}

//“ye ek command ke tarah hai jo jod deta hai inke behaviour ko”
//👇🏻
// car *bmwev = new ev();



// ==================================================================================================================
// ==================================================================================================================
// ==================================================================================================================
// ==================================================================================================================
// ==================================================================================================================
// ==================================================================================================================
// ==================================================================================================================
// ==================================================================================================================
// ==================================================================================================================



// ==================================================================================================================
// ==================================================================================================================
// ==================================================================================================================
// ==================================================================================================================
// ==================================================================================================================
// ==================================================================================================================
// ==================================================================================================================



#include <iostream>

class car {
public:

    // virtual ka matlab:
    // agar parent pointer/reference kisi child object ko point kare,
    // toh runtime pe actual object ka behavior use karo

    virtual void printing() {
        std::cout << "we are under the parent fxn" << std::endl;
    }
};



class ev : public car {

public:

    // override matlab:
    // parent ke virtual function ka child version

    void printing() override {

        std::cout << "We are printing under ev i.e child" << std::endl;
    }

};




int main() {

    // VERY IMPORTANT LINE
    // ----------------------------------------------------
    // car*  ---> parent type pointer
    //
    // new ev()
    // ---> actual child object heap pe bana
    //
    // inheritance ki wajah se:
    // ev object ke andar car part bhi hota hai
    //
    // isliye:
    // parent pointer safely child object ko point kar sakta hai
    //
    // this is called:
    // UPCASTING
    //
    // child ---> parent
    //
    // ----------------------------------------------------

    car* bmwev = new ev();




    // bmwev pointer type:
    // car*
    //
    // actual object:
    // ev
    //
    // virtual ki wajah se:
    // runtime pe actual object type check hota hai
    //
    // so:
    // ev::printing() chalega
    //
    // NOT:
    // car::printing()
    //
    // ----------------------------------------------------

    bmwev->printing();

}




/*
========================================================

CORE INTUITION

virtual ek mechanism hai
jo parent pointer ko child object ke real behavior se connect karta hai.

Without virtual:
parent pointer --> parent function

With virtual:
parent pointer --> actual child behavior

========================================================
*/