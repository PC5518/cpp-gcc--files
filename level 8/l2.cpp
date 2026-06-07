#include <iostream>
int main() {
    std::string string = "deva"; // for a computer string is just A series of character. like
    // to a compter string is d e v a  that is the series of character;
    //  now the fact is that the string value is backed by char at the hardware memory management level
    // to understand it we can use the old c language based char list based memory allocation;
    char list[]= "Aditya"; // now this is a list containing character
    std::cout << list<<std::endl;
    int deva[]= {1,3,3};
    for (int i: deva) {
        std::cout<< i<<std::endl;
    }
    char character ='a';
    int data = 123;
    // int* ptr =&data;
    // std::cout<< *ptr<<std::endl; 
    std::cout<<  character<< std::endl;
    // let's come to char list
    char* ptr = list;  // Array ka naam (list) normal variable ki tarah behave nahi karta. most expression me list automatically convert ho jata hai i.e &list[0]
    std::cout<< ptr<<std::endl;
    
}
// +---+---+---+---+---+---+----+
// | A | d | i | t | y | a | \0 | this \0 means that the data list is over;
// +---+---+---+---+---+---+----+