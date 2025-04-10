#include <stdio.h>

/*
	- Acordar
	- Ir ao banheiro
	- Escovar o dente
	- Lavar o rosto
	...
	- Se eu estou com o carro:
		- Ir de carro pra faculdade
	- Se não:
		- Ir pro ponto de ônibus
	...
*/

int main() {
	int x = 5;
	// if -> se
	if (x == 5) printf("Verdadeiro\n");
	else        printf("Falso\n");
	// else -> se não

	if (x == 5) {
		printf("Oi\n");
		printf("Verdadeiro\n");
	}

	x = 6;
	if (x == 5) {
		printf("Oi\n");
		printf("Verdadeiro\n");
	}
	else {
		printf("Tchau\n");
		printf("Falso\n");
	}

	if (x == 5) {
		printf("Algo\n");
		printf("Verdadeiro\n");
	}
	else if (x == 6) {
		printf("Se não se\n");
	}
	else {
		printf("Tchau\n");
		printf("Falso\n");
	}

	int valor = 50;
	if (valor < 40) {
		printf("Valor baixo\n");
	}
	else if (valor < 90) {
		printf("Valor médio\n");
	}
	else if (valor < 150) {
		printf("Valor alto\n");
	}
	else {
		printf("Valor estupidamente alto\n");
	}

	/*
	int z = 0;
	if (valor < 100) {
		z = 200;
	} else {
		z = 1000;
	}
	*/
	// If ternário:
	int z = (valor < 100) ? 200 : 1000;
	printf("z = %d\n", z);

	printf("Fim\n");
	return 0;
}