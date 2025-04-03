#include <stdio.h>

int main() {
	// print: imprimir
	// f: format -> formato
	printf("%d\n", 15); // d: decimal -> decimal (0 1 2 3 4 5 6 7 8 9)

	int x;
	x = 18; // x "recebe"

	printf("%d\n", x);
	printf("%d\n", x);

	int y = -91;
	printf("y = %d\n", y);

	y = 100;
	printf("y = %d\n", y);

	int z = 0; // ZII: Zero Is Initialization -> Zero É Inicialização
	// ...
	z = 16;
	printf("z = %d\n", z);

	// const: constant -> constante
	const int MAX_VIDA_PLAYER = 3;
	printf("MAX_VIDA_PLAYER = %d\n", MAX_VIDA_PLAYER);

	return 0;
}