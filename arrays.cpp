#include <iostream>

// int main() {
//     int person1;
//     int person2;
//     int person3;
//     return 0;
// }
int main() {
    int ids[100]; // 100 elemenst array created
    ids[0]=5;
    std::cout << ids[0];
    for (int i=0; i<100;i++) {
        ids[i]=i;
        std::cout<< ids[i]<< " ";
        // ids.push_back[i]; only for vector!!!!
    } 
    std::cout<< ids;
//learned arrays: fixed size, loop access, memory address behavior

}