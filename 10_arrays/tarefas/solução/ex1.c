#include <stdio.h>

#define N 4

int main() {
	// Escreva a seguir um algoritmo que itere sobre os valores de um array
	// de tamanho 4 e calcula a média aritmética de seus elementos
	float notas[N] = {7, 9, 8.5, 7.5};
	float media = 0;
	for (int i = 0; i < N; i += 1) {
		media += notas[i];
	}
	media /= N;

	printf("media = %f\n", media);
	return 0;
}
