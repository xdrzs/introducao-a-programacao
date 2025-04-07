#include <stdio.h>

float normalizar(float start, float end, float value) {
	// Implemente essa função que normaliza um `value` entre `start` e `end` para o intervalo [0,1]
	// start -> começo
	// end   -> final
	// value -> valor
	return (value - start) / (end - start);
}

int main() {
	printf("%.2f tem que ser igual a 0.00\n", normalizar(8, 24, 8));
	printf("%.2f tem que ser igual a 1.00\n", normalizar(8, 24, 24));
	printf("%.2f tem que ser igual a 0.50\n", normalizar(100, 200, 150));
	printf("%.2f tem que ser igual a 0.81\n", normalizar(340, 900, 795));
}
