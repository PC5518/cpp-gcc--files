#include <iostream>
#include <vector>
int main() {
	std::vector<int>v={1,23,23,56,11,55,21};
	for (int x: v) {
		if (x%2==0) {
			std::cout<<x<<" ";
		}
		
	}

}