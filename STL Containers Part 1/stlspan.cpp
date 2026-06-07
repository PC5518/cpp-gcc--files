#include <iostream>
#include <array>
#include <span>
#include <vector>
void print1(std::array<int,5>& arr) {
    for (int i: arr ) {
        std::cout<<i << std::endl;
    }
} // ye kaaam kar jayega but 
void print2(std::vector<int>& arr) {
    for (int i: arr ) {
        std::cout<<i << std::endl;
    } // nahi chalega ❌
}
void print3(int arr[5]) {
    for (int i: arr ) {
        std::cout<<i << std::endl;
    } // nahi chalega ❌
}
/// so we use span 
// it tells mujhe ownership nahi chahiye bas data dekhna hai=
void print4(std::span<int> data)
{
    for(int x : data)
        std::cout << x << ' ';
} // now it will accept both array, vector and int array
int main() {
    std::cout<<"program starts" <<std::endl;
    std::vector<int> vector= {1,2,3,45,5};
    print4(&vector);

}