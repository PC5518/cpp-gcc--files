#include <iostream>
int main(int number, char* argv[]) { // isme sab string ke hi roop me aata hai  by default
    for (int i =0;i< number; i++) {
        std::cout<<argv[i] <<std::endl;
    }
}

// argc ->  argument count
// argv ->  argument vector