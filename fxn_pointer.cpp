#include <iostream>

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    // function pointer banaya — add ya multiply dono accept karega
    int (*fp)(int, int);

    char op;
    std::cout << "Choose + or *: ";
    std::cin >> op;  // user se input lo

    if (op == '+') {
        fp = add;       // add ka address assign kiya
    } else {
        fp = multiply;  // multiply ka address assign kiya
    }

    // jo bhi assign hua — woh chala!
    std::cout << fp(2, 3) << "\n";

    return 0;
}