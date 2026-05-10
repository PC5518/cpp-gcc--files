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
//  joojo bhi hai animal me sab aa gya dog me and extra kuch jod sktee hai public me;
};
int main() {
    std::string mumma="Happy mumma day!!!! mumma 🐹";
    int number=0;
    for (int i;i=1; i++) {
        number++;
        std::cout<<mumma <<" " << number << " times "<<std::endl;

    }
}
