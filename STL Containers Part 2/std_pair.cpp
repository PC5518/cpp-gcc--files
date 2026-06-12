#include <iostream>
int main() {
    std::pair<std::string, int> student  {"Aditya" ,90};
    std::cout << student.first<<std::endl;
}



// Memory intuition:

// student
// │
// ├── first  -> "Aditya"
// └── second -> 20