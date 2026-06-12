#include <iostream>
#include <functional>
// now we will see something that we have never encountered yet
int main() {
    int var =23;
    int& deva =var;
    // this is the basic reference we have seen therefore same thing but covered in a different form.
    // std::cout << << std::endl;
    std::cout <<deva <<std::endl;
    // now the problem is that what we maded reference is not an real object. it's just an another name for the existing variable or the object.
    int x =234;
    auto real_object_reference =  std::ref(x);
    std::cout << real_object_reference<<std::endl;
    real_object_reference++;
    std::cout <<x <<std::endl;
    std::cout <<real_object_reference <<std::endl;
    // note: yahan ref ka type hai std::reference_wrapper<int>;
}