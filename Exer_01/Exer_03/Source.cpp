#include <iostream>

void impVet(float vet[]) {
	for (int i = 0; i < 10; i++) {
		std::cout << "v[" << i << "] = " << &vet[i] << std::endl;
	}
}

int main() {
	float v[10];
	
	for (int i = 0; i < 10; i++) {
		v[i] = i;
	}

	impVet(v);

	system("pause");
	return 0;
}