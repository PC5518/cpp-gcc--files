#include <iostream> 
template <typename type>
class car {
public:
    type speed;
    type modelnumber;
};
int main() {
    car<int> ford; //  actually class ko pata nhi hai pahle se ki andar ke items ka type hai kya
    //  here compiler knows rhe type already as "type" but the actual tyype is not defiend yet. that's why it will create an error.
    // baad me wo change kar skta hai apne datatype ko accordingly
    // ek aur baar ki yaaha int ke jagah std::string bhi de sakte hai and agar alag hua toh type wala type manage kar dega. 
    ford.speed=23;
}
int main() {
    std:cout<<ford.speed <<std::endl;
}