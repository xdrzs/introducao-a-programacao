#include <stdio.h>

// Implemente essa função que retorna a soma dos `n` primeiros pares a partir do número 1
int soma_n_primeiros_pares(int n) {
	int soma = 0;
	// ...
	return soma;
}

int main() {
	int n = 2;
	printf("Soma dos %d primeiros = %d\n", n, soma_n_primeiros_pares(n));

	n = 4;
	printf("Soma dos %d primeiros = %d\n", n, soma_n_primeiros_pares(n));

	n = 10;
	printf("Soma dos %d primeiros = %d\n", n, soma_n_primeiros_pares(n));

	n = 100;
	printf("Soma dos %d primeiros = %d\n", n, soma_n_primeiros_pares(n));

	n = 30000;
	printf("Soma dos %d primeiros = %d\n", n, soma_n_primeiros_pares(n));
	return 0;
}
