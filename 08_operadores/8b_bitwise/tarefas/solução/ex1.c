#include <stdio.h>

// Implemente as duas funções a seguir apenas utilizando operadores bitwise!
int dobrar(int num) {
	return num << 1;
}

int meiar(int num) {
	return num >> 1;
}

int main() {
	int x = 100;
	printf("Se eu dobrar %d eu tenho: %d\n" , x, dobrar(x));
	printf("E se eu meiar %d eu tenho: %d\n", x, meiar(x));
	return 0;
}
