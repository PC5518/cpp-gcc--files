#include <iostream>
struct Point1 {
// dfault access is public
    int x;
    int y;
};

class Point2 {

    int x1;
    int y;
};
int main() {
    Point1 deva;
    deva.x= 4;
    std::cout<<deva.x <<std::endl;
    Point2 aditya;
    aditya.x1= 23; // private by default
    std::cout<<aditya.x1 << std::endl;

}
// only eek hi cheez ka antar hai that is in class thee default access is private;
// in struct the default access is public