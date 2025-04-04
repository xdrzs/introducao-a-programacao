#include <stdio.h>

/*
int x; 16+ bits (32 bits)

// short -> curto
short int x; 16 bits

// long -> longo
long int x; 32+ bits (64 bits)
long long int x; 64+ bits

// unsigned -> sem sinal 
unsigned int x;
unsigned short int x;
unsigned long int x;
unsigned long long int x;

// float -> flutuar
float y; 32 bits
// double -> duplo
double z; 64 bits

// char: character -> caractere
char c; 8 bits   [-128,127]
unsigned char b; [0, 255]
*/

int main() {
	int x = 15; // 0000000 00000000 00000000 00001111
	printf("Tamanho do int = %lu\n", sizeof(int));

	unsigned int a = 2;
	printf("a = %u\n", a);

	double w = 15.0;
	printf("w = %f\n", w);

	w = 1.25e3; // 1 * 10ˆ3
	printf("w = %f\n", w);

	char inicial = 'L';
	printf("inicial = %c\n", inicial);

	return 0;
}