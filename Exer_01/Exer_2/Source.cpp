#include <iostream>


int main() {
	int b, a;

	std::cout	<< "Digite um valor inteiro: " << std::endl;
	std::cin	>> a;
	std::cout << "Digite um valor inteiro: " << std::endl;
	std::cin >> b;

	if (&a > &b) {
		std::cout << "Memoria de a eh maior e tem: " << &a << " armazenado" << std::endl;
	}
	else {
		std::cout << "Memoria de b eh maior e tem: " << &b << " armazenado" << std::endl;
	}

	system("pause");
	return 0;
}