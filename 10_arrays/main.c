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

	printf("------\n");
	for (int i = 0; i < 3; i += 1) {
		printf("array[%d] = %d\n", i, array[i]);
	}

	// printf("array[3] = %d\n", array[3]); // array bound checking -> checagem de limites para arrays

	float pesos_argentinos[4] = { 1100, 600, 40100, 580 };
	float soma = 0;
	for (int i = 0; i < 4; i += 1) {
		soma += pesos_argentinos[i];
	}
	printf("soma = %f\n", soma);

	printf("----\n");
	// C89
	float reais[] = {15.50, 200, 100, 48.9, 77.0};
	printf("sizeof(reais) = %zu\n", sizeof(reais));
	for (int i = 0; i < sizeof(reais)/sizeof(reais[0]); i++) printf("reais[%d] = %f\n", i, reais[i]);

	char meu_nome[N] = {'L', 'u', 'i', 'z'};
	for (int i = 0; i < N; i++) {
		printf("%c", meu_nome[i]);
	}
	printf("\n");

	return 0;
}