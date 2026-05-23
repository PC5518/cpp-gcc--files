#include <iostream>
template <typename type>
class car {
public:
    void show() {
        std::cout<< "generic version" <<std::endl;
    }
};
template<> 
class car<int> {
public:
    void show() {
        std::cout<<"this one is the specialised version for integer based inputs or types " <<std::endl;
    }
};
int main() {
    car<std::string> ford;
    ford.show();
    car<int> bmw;
    bmw.show();

}