#include <iostream>
using std::cout;
using std::endl;
class youtube {
public:
    int users;
    int likes;
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
    cout<<pycraft.users <<std::endl; // fxn baar baar yahi check karega ki object ke under me yaa iska koi member fxns hai yaa nahi with the name users.
    ++pycraft.likes;

    cout<<pycraft.likes <<std::endl;
}