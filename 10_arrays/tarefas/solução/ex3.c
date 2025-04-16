#include <stdio.h>

#define N 8

int main() {
	const float alvo = 100;
	float arr[N] = {12.5, 101.6, 900, 89.9,679.0, -15., 91, -803.};
	float par[2];

	// Escreva a seguir um algoritmo que dado um array de tamanho N, acha
	// o par de números, os quais sua soma chega mais perto do valor `alvo`.
	// Guarde o par no array `par`.
	// Por exemplo, dado o array arr[3] = {100, 0, -101},
	// os valores para `par` tem de ser: par[0] == 100 e par[1] == -101
	par[0] = arr[0];
	par[1] = arr[1];
	float mais_perto = 1e9;
	for (int i = 0; i < N; i++) {
		if (i == N-1) break;

		for (int j = i; j < N; j++) {
			float res = alvo - (arr[i] + arr[j]);
			if (res*res < mais_perto) {
				mais_perto = res*res;
				
				par[0] = arr[i];
				par[1] = arr[j];
			}
		}
	}

	printf("O par que chega mais perto de %.2f é (%f,%f)\n", alvo, par[0], par[1]);

	return 0;
}
