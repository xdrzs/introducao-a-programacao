#include <stdio.h>

/*
Precedência
+ - (Unário)
()
* / %
+ -
*/

int main() {
	// Binary Operator -> Operador Binário
	int x = 10 % 7;
	printf("x = %d\n", x);
	printf("\n");
	
	printf("0 %% 2 = %d\n", 0 % 2);
	printf("1 %% 2 = %d\n", 1 % 2);
	printf("2 %% 2 = %d\n", 2 % 2);
	printf("3 %% 2 = %d\n", 3 % 2);
	printf("4 %% 2 = %d\n", 4 % 2);
	printf("\n");

	int y = 15 / 7;
	printf("y = %d\n", y);

	float f = 15.0f / 7.0f;
	printf("f = %f\n", f);
	printf("\n");

	// Unary Operator -> Operador Unário
	int z = -6;
	printf("z = %d\n", z);

	int w = (15 + 5) * 2 - 6 / 3;
	printf("w = %d\n", w);

	printf("15 * -2 = %d\n", 15 * -2);
	return 0;
}