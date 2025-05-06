#include <stdio.h>




int main() {
	// print -> imprimir
	// f: format -> formato
	printf("Hello World\n");

	int x;
	x = 20; // x "recebe" 20

	printf("%d\n", x); // d: decimal -> decimal (0 1 2 3 4 5 6 7 8 9)

	printf("%d\n", x);

	int abajur_bem_legal = -91;
	printf("abajur_bem_legal = %d\n", abajur_bem_legal);

	abajur_bem_legal = 100;
	printf("abajur_bem_legal = %d\n", abajur_bem_legal);

	int z = 0; // ZII: Zero Is Initialization -> Zero É Inicialização
	// ...
	z = 5;
	printf("z = %d\n", z);

	// const: constant -> constante
	const int MAX_VIDA_PLAYER = 3;
	printf("MAX_VIDA_PLAYER = %d\n", MAX_VIDA_PLAYER);

	int a = 12, b = 90, c = 100;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);

	return 0;
}