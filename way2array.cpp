#include <iostream>

int main() {

    // declaring an array with 4 integer elements
    int deva[] = {1, 2, 58, 78};

    // sizeof(deva)      → total bytes of whole array (16 bytes)
    // sizeof(deva[0])   → bytes of ONE element (4 bytes)
    // dividing both     → gives count of elements (16/4 = 4)
    for (int i = 0; i < (sizeof(deva) / sizeof(deva[0])); i++) {

        // print each element followed by a space
        std::cout << deva[i] << " ";

    }

    return 0; // 0 means program ended successfully

}
