// ek shabd ke kahe toh:
// reduce() ≈ accumulate() + Parallel Processing
#include <iostream>
#include <vector>
#include <numeric>
int main() {
    std::vector<int> v{1,2,3,4};
    auto result=  std::accumulate(v.begin(), v.end(), 0);
    std::cout<< result<<std::endl;
// now kaam dono ek karte hai lekin accumulate iterate karte hue karta hai from starting of the container's element!
// computation math/logic behind: Left to right -> (((1+2)+3)+4)
// now reduce isi ko pair me tod deta hai and fir compute karta hai. lekin : order is however not guranteed
// reduce()

// Can do

// (1+2)

// (3+4)

// ↓

// 3+7

// OR

// (2+3)

// (1+5)

// ...

    auto data=  std::reduce(v.begin(), v.end(), 0);

    std::cout<<"basically in reduce many cpu cores are working therefore excecution is faster." << data<<std::endl;
}


    // Why does this matter?

    // Addition

    // 1+2+3+4

    // No problem.

    // Because

    // (a+b)+c

    // =

    // a+(b+c)

    // Same answer.

    // But subtraction?

    // Suppose

    // 10-2-3

    // Left to right

    // (10-2)-3

    // =

    // 5

    // Parallel grouping

    // 10-(2-3)

    // =

    // 11

    // 😱

    // Different answer.

    // Isliye

    // reduce() should be used only when the operation is associative.

    // Examples:

    // ✅ Addition

    // ✅ Multiplication


// in terms of execution we know thast std::reduce is faster than std::accumulate but when it comes to ram occupy which wins in terms of occupuing less memory at the time of execution ?
// When it comes to RAM, both algorithms are highly memory-efficient and tie for a win. Both std::accumulate and std::reduce do not scale memory usage with the size 
// of your dataset. They both use an O(1) (constant) amount of extra memory, usually requiring only a single variable (an accumulator) to store the result.