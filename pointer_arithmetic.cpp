#include <iostream>
int main() {
    int arr[]={1,23,4,5};
    for (int& i:arr) {
        //auto i ya int i — copy banti hai!
        std::cout<<(void*)&i<<std::endl;
    }
}