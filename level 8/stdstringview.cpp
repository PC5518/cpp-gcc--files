#include <iostream>
// void show(std::string name   ) {
//     std::cout<< name<<std::endl;
// }
void show(std::string& name   ) { // by creating we can directly take the reference.
    std::cout<< name<<std::endl;
}
int main() {
    std::string s ="variable created inside the std::string in the main fxn";
    show(s);
    // so here basically s is getting copies in the show() fxn 
    // therefore more memory occupation;
}