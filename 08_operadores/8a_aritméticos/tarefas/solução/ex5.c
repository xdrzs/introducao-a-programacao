#include <stdio.h>

// Dado um número inteiro, implemente uma função que extraia a dezena e unidade separadamente desse número
int dezena(int num) {
	return num % 100 / 10;
}

int unidade(int num) {
	return num % 10;
}

int main() {
	printf("Para 89, a dezena é igual a %d e a unidade é igual a %d\n", dezena(89), unidade(89));
	printf("Para 0, a dezena é igual a %d e a unidade é igual a %d\n", dezena(0), unidade(0));
	printf("Para 1, a dezena é igual a %d e a unidade é igual a %d\n", dezena(1), unidade(1));
	printf("Para 45, a dezena é igual a %d e a unidade é igual a %d\n", dezena(45), unidade(45));
	printf("Para 329, a dezena é igual a %d e a unidade é igual a %d\n", dezena(329), unidade(329));
	printf("Para 1076, a dezena é igual a %d e a unidade é igual a %d\n", dezena(1076), unidade(1076));
	printf("Para -12, a dezena é igual a %d e a unidade é igual a %d\n", dezena(-12), unidade(-12));
}
