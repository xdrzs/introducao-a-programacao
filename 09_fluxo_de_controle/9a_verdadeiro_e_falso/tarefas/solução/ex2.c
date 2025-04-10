#include <stdio.h>

// Implemente a seguinte função que diz se um bit em um índice específico de um `int` está ligado
// on -> ligado
int is_bit_on(int num, int index) {
	return num >> index & 1;
}

int main() {
	printf("O bit 0 do número 0 está ligado? %u\n", is_bit_on(0, 0));
	printf("O bit 0 do número 1 está ligado? %u\n", is_bit_on(1, 0));
	printf("O bit 0 do número 3 está ligado? %u\n", is_bit_on(3, 0));
	printf("O bit 1 do número 3 está ligado? %u\n", is_bit_on(3, 1));
	printf("O bit 2 do número 3 está ligado? %u\n", is_bit_on(3, 2));
	printf("O bit 8 do número 5467 está ligado? %u\n", is_bit_on(5467, 8));
	return 0;
}
