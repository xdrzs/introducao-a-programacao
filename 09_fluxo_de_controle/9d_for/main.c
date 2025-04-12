#include <stdio.h>

int main() {
	int n = 10;
	
	// int i = 0;
	// while (i < n) {
	// 	printf("%d\n", i);
	// 	i += 1;
	// }
	// printf("i depois que o while terminou: %d\n", i);

	// for -> para
	for (int i = 0; i < n; i += 1) {
		printf("%d\n", i);
	}
	// printf("i depois que o for terminou: %d\n", i);

	printf("-----\n");
	int i = 0;
	for (; i < n; i += 1) {
		printf("%d\n", i);
	}
	printf("i depois que o for terminou: %d\n", i);

	printf("-----\n");
	for (int j = 0; j < n; j++) {
		printf("%d\n", j);
	}

	int x = 0;
	printf("x++ = %d\n", x++); // post-increment -> pós-incremento

	printf("++x = %d\n", ++x); // pre-increment -> pré-incremento

	return 0;
}