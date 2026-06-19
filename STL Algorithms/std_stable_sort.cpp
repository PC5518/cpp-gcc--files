#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
struct student {
    std::string name;
    int marks;
};
int main() {
    std::vector<student> v{ {"David", 90}, {"Ishita", 81}, {"Aditya", 90}, {"Ryan",8}};
    // normal vector ke liye useless hai but for database etc very useful and critically important.
    std::stable_sort(v.begin(), v.end(), [](const student& a, const student& b) {
        return a.marks> b.marks;
    });
    for (const auto& s: v) {
        std::cout<<s.name << " " <<s.marks << std::endl;
    };
}