#include  <iostream>
int main() {
#if defined(_WIN32) 
    std::cout <<"this is either windows  " <<std::endl;
#elif defined(__linux__)
    std::cout <<"this is a linux machine" <<std::endl;

#else 
    std::cout <<"this is not windows or linux" <<std::endl;
#endif 
}