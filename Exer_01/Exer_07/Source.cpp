#include <iostream>


int compStr(char *s1, char *s2, int tam1, int tam2) {
	bool possui = false;

	for (int i = 0; i < tam1 - tam2 + 1; i++) {
		for (int j = 0; j < tam2; j++) {
			if ((*(s1 + i + j) == *(s2 + j))) {
				possui = true;
			}
			else {
				possui = false;
				break;
			}
		}
		if (possui)
			break;
	}
	return possui;

}

int main() {
	char str1[200], str2[200];
	char *p1, *p2;
	bool tem;

	std::cout << "Digite uma palavra: ";
	std::cin >> str1;
	std::cout << "Digite uma palavra: ";
	std::cin >> str2;

	p1 = str1;
	p2 = str2;


	tem = compStr(p1, p2, strlen(str1), strlen(str2));

	if (tem) {
		std::cout << "A segunda palavra contem na primeira." << std::endl;
	}
	else {

		std::cout << "A segunda palavra nao contem na primeira." << std::endl;
	}
	
	system("pause");
	return 0;
}