#include <stdio.h>

// true -> verdadeiro
// false -> falso
int main() {
	int x = 5;
	int comp = x == 5;
	printf("%d == 5? %d\n", x, comp); // != 0 => verdadeiro

	comp = x != 5;
	printf("%d != 5? %d\n", x, comp); // == 0 => falso

	comp = x > 5;
	printf("%d > 5? %d\n", x, comp);

	comp = x >= 5;
	printf("%d >= 5? %d\n", x, comp);

	comp = x < 6;
	printf("%d < 6? %d\n", x, comp);

	comp = x <= 11;
	printf("%d <= 11? %d\n", x, comp);

	comp = !comp;
	printf("comp? %d\n", comp);

	comp = x > 0 && x < 5;
	printf("%d > 0 && %d < 5? %d\n", x, x, comp);

	comp = x > 0 || x < 5;
	printf("%d > 0 || %d < 5? %d\n", x, x, comp);

	comp = !(x > 0 || x < 5) && x == 5;
	printf("!(%d > 0 || %d < 5) && x == %d? %d\n", x, x, x, comp);

	return 0;
}