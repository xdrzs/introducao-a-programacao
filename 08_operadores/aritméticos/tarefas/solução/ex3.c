#include <stdio.h>

int arredondar_positivo(float f) {
	// Implemente essa função que arredonda um float positivo para seu int mais próximo
	return (int)(f + 0.5);
}

int main() {
	printf("%d tem que ser igual a 1\n", arredondar_positivo(1.2));
	printf("%d tem que ser igual a 10\n", arredondar_positivo(9.8));
	printf("%d tem que ser igual a 130\n", arredondar_positivo(129.5));
}
