#include <iostream>
int main() {
	int deva=72;
	int *pyari = new int(1);
    delete pyari;
	std::cout<< pyari<<std::endl; //  we make a memory access in heap ratehr than stack
	// thing i.e to be observed is that memory adress is still the same but the
	// data inside it is
	std::cout<< *pyari<<std::endl; // vePYARI IS NOW A DANGLING PPOINTER
	// pyari is now a dangling pointer 
}
