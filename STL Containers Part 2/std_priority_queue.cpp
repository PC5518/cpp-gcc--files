#include <iostream>
#include <queue>
int main() {
    // now uordered_queue is like : i don't care who has come first or last. i just care who's the most important.
    std::priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(100);
    pq.push(40);
    pq.push(50);
    std::cout << pq.top(); // output is 100 by default it uses the magnitude of the integer to prioritise. the more the magnitude the higher is the priority

}