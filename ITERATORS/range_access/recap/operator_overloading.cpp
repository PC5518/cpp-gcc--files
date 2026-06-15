#include <iostream>
using std::cout;
using std::endl;
class youtube {
public:
    int users;
    youtube(int s ) {
        users= s;
    }
    // now operator overloading
    void operator++() {
        users++;
    }
    void display() {
        cout<< users<< endl;
    }
};
int main() {
    youtube pycraft(10);
    ++pycraft;

    pycraft.display();
    cout<<pycraft.users <<std::endl;
    ++pycraft.users;
    cout<<pycraft.users <<std::endl;
}