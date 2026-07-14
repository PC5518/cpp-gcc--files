#include <iostream>
#include <format>

int main() {
    int age=23;
    std::string name= " this is a name";
    double marks = 233.44;
    double total = 451.34;
    printf("Age = %d \n",  age); // old fomat C style 
    // now this %d makes a placeholder that this value as a decimal will take place here.
    // but it's messy ugly and also type unsafe
    // now the option two is:
    std::cout<< "Age:" << age<< "\n" <<std::endl;
    // now this is sade but what if ?
    std::cout
    << "Student "
    << name
    << " scored "
    << marks
    << " out of "
    << total
    << ".";
    std::cout<< " "<<std::endl;
    // this becomes extremely long and hard to rearrange
    // now the next alternative is std::stringstream
    // std::stringstream  now this is very flexiblle and very easy 
    // The committee wanted something that is

    // readable
    // type-safe
    // fast
    // modern
    // Python-like
    // now the  purpose was to create a formatted string from values.
    // notice the wording.
    // it does not print
    // it returns a string
    // Input values
    //     │
    //     ▼
    // std::format(...)
    //     │
    //     ▼
    // std::string
    // the fxn signature: 
    // std::string format(   now here std::string is the return type
    // std::format_string<Args...> fmt,
    // Args&&... args);
    // iska pura funda simple hai that is pehle arrange properly and then return that value value as string that will be later printed on the console via console output cout
    std::string data = std::format("Age= {}", age);  // this {} is really amazing !!! it's type or class independent
    std::cout<< data;
    // my own realisation:  toh ye placeholder {} is liye advanced hai because ye irrespective of data type yaa class absorb kar lega ??? right ? wahi C wala only %d for decimal andd so on  i.e messy 

}
