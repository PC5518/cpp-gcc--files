#include <iostream>
union Data
{
    int number;
    float value;
};
// now the problem is that union stores the memory in form of bits but not the datatype. so it does not store the dattype along with it.
// that's why std::variant is used.
