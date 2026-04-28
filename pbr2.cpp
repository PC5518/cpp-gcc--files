#include <iostream>
#include <vector>
//  extra memory waste nahi  
// ❌ Yeh karo toh copy banegi
//------------------------------------------------------------------
// void printArray(std::vector<int> arr) {  // copy!
//     for(auto i: arr) {
//         std::cout << i << std::endl;  // memorry dusri baad 2nd time
//     }
// }
//-----------------------------------------------------------------
//fix :->
void printArray(std::vector<int>& array_sample) { //  same adress access ho gya
    // wahi item access ho gya waha se. 
    for (auto i: array_sample) {
        std::cout<<i<< " ";
    }
}

int main() {
    std::vector<int> big_Array = {0,1,2,3}; // memory jo already use ho rhi hai
    printArray(big_Array);  // yahan copy bani!
}
// fix:
