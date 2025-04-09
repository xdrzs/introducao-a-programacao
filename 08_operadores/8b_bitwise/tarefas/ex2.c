#include <stdio.h>

void print_bits32(int num) {
	for (int i = 31; i >= 0; i -= 1) {
		printf("%d", (num >> i) & 1);
		if (i % 8 == 0) printf(" ");
	}
	printf("\n");
}

// Implemente os algoritmos corretamente para cada função a seguir:
// ATENÇÃO: O índice `index` está no intervalo [0,31]
int ligar_bit(int bits, int index) {
	return 0;
}

int desligar_bit(int bits, int index) {
	return 0;
}

int main() {
	printf("%u tem que ser igual a 1\n", ligar_bit(0,0));
	printf("%u tem que ser igual a 2\n", ligar_bit(0,1));
	printf("%u tem que ser igual a 8\n", ligar_bit(0,3));
	printf("%u tem que ser igual a 5\n", ligar_bit(1,2));
	printf("%u tem que ser igual a 7\n", ligar_bit(3,2));
	printf("%u tem que ser igual a 2147483648\n", ligar_bit(0,31));
	printf("\n");
	printf("%u tem que ser igual a 0\n", desligar_bit(0,0));
	printf("%u tem que ser igual a 1\n", desligar_bit(5,2));
	printf("%u tem que ser igual a 0\n", desligar_bit(16,4));
	printf("%u tem que ser igual a 2147483647\n", desligar_bit(0xFFFFFFFF,31));
	return 0;
}
