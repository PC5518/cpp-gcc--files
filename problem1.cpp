#include <iostream>
// the task wwas to develop to find the largest number from the list. 
#include <vector>
int main() {
    std::vector<int> given = {22,5,678,10000};
    int highest = given[0];
    for (int x: given) {
        if (x>highest) {
            highest=x;
            std::cout<<"higher is "<< x<<std::endl;
        } else {
            std::cout<<"the next number is not greater";
        }
    }
    std::cout<< highest;
}
int main() {
    int main () {
        
    }
}