#include <stdio.h>


void imprimir_do_while(int num) {
	do {
		printf("%d\n", num);
		num -= 1;
	}
	while (num >= 0);
} 

// Implemente a seguinte função de forma que, não importando o valor de `num`, ela tenha exatamente
// o mesmo comportamento da função acima, porém sem usar `do while`
void imprimir(int num) {
	if (num < 0) printf("%d\n", num);
	while (num >= 0) {
		printf("%d\n", num);
		num -= 1;
	}
} 

int main() {
	int n = 5;
	printf("--> imprimir_do_while(%d):\n", n);
	imprimir_do_while(n);
	printf("--> imprimir_while(%d):\n", n);
	imprimir(n);

	n = 0;
	printf("--> imprimir_do_while(%d):\n", n);
	imprimir_do_while(n);
	printf("--> imprimir_while(%d):\n", n);
	imprimir(n);

	n = -1;
	printf("--> imprimir_do_while(%d):\n", n);
	imprimir_do_while(n);
	printf("--> imprimir_while(%d):\n", n);
	imprimir(n);

	n = -20;
	printf("--> imprimir_do_while(%d):\n", n);
	imprimir_do_while(n);
	printf("--> imprimir_while(%d):\n", n);
	imprimir(n);
	return 0;
}
