#include <iostream>
#include <vector>
int main() {
	std::vector<int> age;
	int input;
	std::cout<< "enter the number of elements: ";
	std::cin>>input;

	for (int i=0 ;i  < input;i++) {
		int enter;
		std::cin>>enter;
		age.push_back(enter);
		
	}
	for (int x: age){
		std::cout<<x<<" ";
	}
}