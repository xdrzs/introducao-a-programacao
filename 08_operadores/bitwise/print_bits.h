#include <stdio.h>

void print_bits8(unsigned char num) {
	for (int i = 7; i >= 0; i -= 1) {
		printf("%d", (num >> i) & 1);
		if (i % 8 == 0) printf(" ");
	}
	printf("\n");
}
