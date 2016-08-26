#include <iostream>


int main() {
	int var1 = 50, var2 = 20;
	
	if (&var1 > &var2) {
		std::cout << "Var1 eh maior: " << &var1 << std::endl;
	}
	else {
		std::cout << "Var2 eh maior: " << &var2 << std::endl;
	}
		
	system("pause");
	return 0;
}