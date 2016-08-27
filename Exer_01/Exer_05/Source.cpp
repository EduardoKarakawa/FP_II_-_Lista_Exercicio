#include <iostream>

#define TAM 5

void leVet(int *p) {
	for (int i = 0; i < TAM; i++) {
		std::cout << "Digite um numero inteiro:";
		std::cin >> *(p + i);
		std::cout << std::endl;
	}
}

void impDobro(int *p) {
	for (int i = 0; i < TAM; i++) {
		std::cout << "V[" << i << "] = " << *(p + i) << " -> Dobro = " 
				  << *(p + i) * 2 << std::endl;
	}
}

int main() {
	int v[TAM];
	int *ptr = v;

	leVet(ptr);
	impDobro(ptr);

	system("pause");
	return 0;
}