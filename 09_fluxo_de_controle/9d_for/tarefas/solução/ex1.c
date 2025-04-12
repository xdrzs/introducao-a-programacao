#include <stdio.h>

int main() {
	// Escreva um algoritmo que imprime as tabuadas de 1 a 10
	for (int i = 1; i <= 10; i++) {
		printf("Taboadinha do %d\n", i);
		for (int j = 1; j <= 10; j++) {
			printf("%d\n", i * j);
		}
	}
	return 0;
}
