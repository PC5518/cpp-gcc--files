#include <iostream>
//  pass by reference
// propert 1 -> original change hota hai
void double_it(int& x) {
    x=x*2;// lagta hai x edit ho raha hai
// actually NUM edit ho raha hai!
// agar &  ya reference nahi banaaya yaa toh  agar access nahi kiya bahar wale ko then andar wala internal agrument hi change hoga . jo ki dikkat hai 
// hame chahiye bahar wale ko uthana/ uska access then change it or manipulate it
}
int main() {
    int num=23;
    double_it(num);
    std::cout<<num << std::endl;

}
