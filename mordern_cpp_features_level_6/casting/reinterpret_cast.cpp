#include <memory>
#include <iostream>
int main() {
    // so static cast ka kaam simple thaa type conversion
    // reinterpret cast ka kaam hai kisi ek object ke type ko dusre type se dekhna.
    int x =234;
    int *ptr = &x;
    // we created a pointer
    std::unique_ptr<int> deva_pointer(new int(10));
    // this is a uniqque pointer
    // or this can also be created in this way
    auto mumma_pointer=  std::make_unique<int>(100);
    // this is a unique pointer

    // now let's again come to reinterpret cast
    //  let's say that i wanna that is ptr pointer variable ko ek std::string ke nazar se dekho
    // compiler says: accha tumne bola toh ab karna hi pade gaaa😕
    std::string* forced_var = reinterpret_cast<std::string*>(&x);
    std::cout<<*forced_var<<std::endl;
}