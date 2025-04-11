#include <stdio.h>

int main() {
	int n = 1;
	
	printf("- Break:\n");
	// while -> enquanto
	while (n < 5) {
		printf("Oi\n");
		
		if (n % 2 == 0) {
			// break -> quebra
			break;
		}
		n += 1;
	}

	printf("- Cotinue:\n");
	int i = 0;
	while (i < 5) {
		if (i % 2 != 0) {
			printf("Impar %d\n", i);
			i += 1;
			// continue -> continuar
			continue;
		}
		printf("Par %d\n", i);
		i += 1;
	}

	printf("- Do while:\n");
	int j = 1;
	/*
	while (j > 1) {
		printf("algo\n");
	}
	*/
	// do -> fazer
	do {
		printf("algo\n");
	} while (j > 1);

	printf("Tchau\n");

	return 0;
}