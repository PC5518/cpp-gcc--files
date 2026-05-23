#include <iostream>
// Variadic Template =
// Flexible number of parameters
template <typename... Args>
void print(Args... args) {
    std::cout<< <<std::endl;
}
// ... ka matlab hua jitne bhi aur parameters aaye future me.
// basically isi baat ka khayal rakha jata hai.

// this is a template based fxn of dynamic amount of argument or parameters



int main() {
    print(1,2,2,544, std::string("deva"));

}