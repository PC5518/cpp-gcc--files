#include <iostream>
#include <queue>
int main() {
    std::queue<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    std::cout<<s.front()<<std::endl; // it's like the person in front of the queue.
    std::cout<<s.back() <<std::endl;
    std::cout << s.empty()<< " 0 i mean false"<<std::endl;
    s.pop();
    std::cout<<s.front()<<std::endl; // it's like the person in front of the queue.
    std::cout<<s.back() <<std::endl;
    std::cout << s.empty()<< " 0 i mean false"<<std::endl;
}