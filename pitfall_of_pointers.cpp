#include <iostream>

int main() {
    // Pitfall 1 — wild pointer
    int* p = nullptr;
    std::cout << p << "\n";   // 0 — safe ✅

    // Pitfall 2 — proper delete
    int* q = new int(10);
    std::cout << *q << "\n";  // 10
    delete q;
    q = nullptr;              // safe ✅
    return 0;
}