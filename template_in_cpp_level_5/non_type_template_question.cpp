#include <iostream>
// my biggest  question is that why not using the int n?????  i mean why not simply the normal call fxn i.e
// this is 👇🏻
void print(int n) {
    std::cout<<n <<std::endl;
}
int main(){ 
    std::cout<<67 <<std::endl;
}
// actually in case of normal fxn first compiler compile the  code then 
// it excecutes line by line in the final after the creation of exe file.

//  ==============================
// but in the case of non  type template the compiler recives the value before excecution only.
// therefore it's not the traditionl runtime method of excecution.



// final difference:
// template based: the compiler already knows the value and print it
// tradtional fxn: the compiler goes the normal run time procedure.
