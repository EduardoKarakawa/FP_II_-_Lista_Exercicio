#include <iostream>

#define TAM 3

int main() {
	float v[TAM][TAM];
	float *ptr = v[0];
	int cont = 0;
	for (int i = 0; i < TAM*TAM; i++) {
		*(ptr + i) = i;
	}




	for (int i = 0; i < TAM*TAM; i++) {
		std::cout << ptr + i << " | ";
		cont++;
		if (cont == 3) {
			std::cout << std::endl << std::endl;
			cont = 0;
		}
	}
	system("pause");
	return 0;
}