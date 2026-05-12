#include <iostream>
class Aditya {
public:
    int age;
    int height;
};
class deepak {
public:
    int marks;
};
class sangeeta : public Aditya, public deepak {
public:
    void printing() {
        std::cout<<"Hey there I am sangeeta singh" <<std::endl;
    }
};
int main() {
    sangeeta mumma;
    mumma.marks=23;

    std::cout<< mumma.marks<<std::endl;
    mumma.printing();

}

/// note : jab variable kisi class type ka hota hai,
// toh usko object bolte hain.