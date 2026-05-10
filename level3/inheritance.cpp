#include <iostream>
class Animal { // toh ye hai hamara common structure
public:
    std::string name;
    int age;
    void eat() {
        std::cout <<name << " khaa rha hai"<<std::endl;
    }
    void sleep() {
        std::cout<<name<< " so raha hai" <<std::endl;
    }
};
// now mujhe ye same structure mujhe inherit karna hai for a new class i.e dog
class Dog:  public Animal {
public:
    int dog_tail_length;
private:
    int stool_smell;

//  joojo bhi hai animal me sab aa gya dog me and extra kuch jod sktee hai public me;
// now if you want more specifically for this one
};
int main() {
    Dog peru;
    peru.age=10;
    peru.dog_tail_length=102;
    std::cout<< peru.age<<std::endl;
    std::cout<< peru.dog_tail_length<<std::endl;
    std::cout<< peru.stool_smell<<std::endl; // can't be accessed sincce it's private

    // so this structure was inherited from the 
}