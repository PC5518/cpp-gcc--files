#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4};
    
    std::cout << sizeof(arr) << "\n";              // 16
    std::cout << sizeof(arr[0]) << "\n";           // 4
    std::cout << sizeof(arr)/sizeof(arr[0]) << "\n"; // 4
    
    return 0;
}