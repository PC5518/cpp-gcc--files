#include <iostream>
class aimodel {
public :
    int data_size;
    int launch_data;
    int reccursivity;
    virtual void printing() {
        std::cout<< "We are printing under ai model parent class "<<std::endl;
    }
};
class transformer: public aimodel {
public:
    void printing() override {
        std::cout<<"We are under transformer which is a child class" <<std::endl;
    }
};



int main() {
    aimodel* chatgpt = new transformer(); // birth point of real OOP polymorphism
// basically  transformer inherit the features of AImodel so it can work under the parent class

}