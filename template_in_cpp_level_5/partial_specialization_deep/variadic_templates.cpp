#include <iostream>
// Variadic Template =
// Flexible number of parameters
template <typename... type> // iska matlaab hua agar koi simple type nahi hai available ...  se hm aur bhi type ke access me le sakte hai
// like for exampek int double std::string
void print(type... args) {
    std::cout<< <<std::endl;
}
// ... ka matlab hua jitne bhi aur parameters aaye future me.
// basically isi baat ka khayal rakha jata hai.

// this is a template based fxn of dynamic amount of argument or parameters



int main() {
    print(1,2,2,544, std::string("deva"));

}