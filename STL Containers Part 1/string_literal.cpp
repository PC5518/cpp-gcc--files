
#include <iostream>
int main() {
    const char* string ="string";
    std::cout<<string<<std::endl;
    // now why not ??
    char* variable= "variable"; // compiler warning!!!!! because the old C and the C++ compiler does not prefer it to change or make it mutable. that's the reason we to avoid the mordenr cpp watning we use const to give assurance to the compiler that the string is imutable
    std::cout<<variable;
    char character_literal= 'a';
    // this is a string literal
    const char* string_literal= "this is a string literal"
}