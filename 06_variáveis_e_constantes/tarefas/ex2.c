#include <stdio.h>

int main() {
	// Concerte o código das linhas a seguir:
	const int a = 20, const int b = 50;
	printf("a = %d\n", a);
	printf("b = %d\n", b)

	const int c = 100;
	a = c;
	printf("a = %d\n", a);
	printf("c = %d\n", c);
}
