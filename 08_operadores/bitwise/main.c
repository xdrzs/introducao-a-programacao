#include <stdio.h>

#include "print_bits.h"

int main() {
	unsigned char bits;
    bits = 3;

    // ~ (not -> não)
    printf("%d\n", bits);
    print_bits8(bits);
    print_bits8(~bits);
    printf("--------\n");

    // & (and -> e)
    print_bits8(bits);
    printf("%d\n", bits);
    print_bits8(5);
    print_bits8(bits & 5);

    // | (or  -> ou)
    printf("--------\n");
    printf("%d\n", bits);
    print_bits8(bits);
    print_bits8(5);
    print_bits8(bits | 5);

    // ^ (xor: exclusive or -> ou exclusivo)
    printf("--------\n");
    printf("%d\n", bits);
    print_bits8(bits);
    print_bits8(5);
    print_bits8(bits ^ 5);

    // << (left bitshift)
    // left  -> esquerda
    // shift -> deslocar
    printf("--------\n");
    printf("%d\n", bits);
    print_bits8(bits);
    print_bits8(bits << 1);
    print_bits8(bits << 2);

    // >> (right bitshift)
    // right -> direita
    printf("--------\n");
    printf("%d\n", bits);
    print_bits8(bits);
    print_bits8(bits >> 1);
    print_bits8(bits >> 2);

	return 0;
}
