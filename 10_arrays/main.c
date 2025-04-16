#include <stdio.h>

// define -> definir
#define N 4

int main() {
	// array -> variedade
	int array[3];

	// Primeiro elemento:
	array[0] = 15;
	printf("array[0] = %d\n", array[0]);

	// Segundo elemento:
	array[1] = 20;
	printf("array[1] = %d\n", array[1]);

	// Terceiro elemento:
	array[2] = 25;
	printf("array[2] = %d\n", array[2]);

	// printf("%d\n", array[3]); // array bounds checking -> checagem de limite de arrays

	printf("------\n");
	for (int i = 0; i < 3; i += 1) {
		printf("array[%d] = %d\n", i, array[i]);
	}

	// C89
	printf("------\n");
	float pesos_argentinos[] = {1100, 650, 2040.5, 11050, 700};
	printf("%zu\n", sizeof(pesos_argentinos));
	float soma = 0;
	for (int i = 0; i < sizeof(pesos_argentinos)/sizeof(pesos_argentinos[0]); i++) soma += pesos_argentinos[i];
	printf("soma = %f\n", soma);

	char nome[N] = {'L', 'u', 'i', 'z'};
	for (int i = 0; i < N; i++) {
		printf("%c", nome[i]);
	}
	printf("\n");

	return 0;
}