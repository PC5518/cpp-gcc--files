#include <iostream>
// Class = Data + Functions — ek saath ek jagah!
class student {
public: // public jaha pe mai pure data ka access pure code bhar chahiye
// private::  for privacy purpose
    std::string name;
    int age;
    float marks;
    void showInfo() {
        std::cout<< name<<std::endl;
        std::cout<<marks<<std::endl;
        std::cout<< age<<std::endl;
    }
    void result() {
        if (marks>=40) {
            std::cout<<name << "pass"<<std::endl; 
        } else {
            std::cout<<name<< "failed" <<std::endl;
        }
    }
    void grade() {
        if      (marks >= 90) std::cout << "Grade: A\n";
        else if (marks >= 70) std::cout << "Grade: B\n";
        else if (marks >= 50) std::cout << "Grade: C\n";
        else                  std::cout << "Grade: D\n";
    }
    
};
int main() {
    student aditya;
    aditya.name= "Aditya Narayan Singh" ;
    aditya.marks= 99;
    aditya.age=17;
    std::cout<< aditya.age<< std::endl;
    aditya.showInfo(); // this only shows variable
    std::cout<< "=================="<<std::endl;
    student Deepak;
    Deepak.age=48;
    Deepak.name="Deepak Singh";
    Deepak.marks=36;
    std::cout<< Deepak.name<<std::endl;
}
