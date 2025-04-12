#include <stdio.h>

// Implemente essa função que, dado um int `n`, desenha com o caractere '*' um triângulo, começando
// pela primeira linha com um '*', depois a segunda linha com dois '*' e assim por diante, até a linha n
// e depois faz a mesma coisa, porém de maneira inversa.
// Por Exemplo, desenha_triangulo(4):
// *
// **
// ***
// ****
// ***
// **
// *
void desenha_triangulo(int n) {
	for (int i = 1; i <= n; i++ ) {
		for (int j = 1; j <= i; j++) printf("*");
		printf("\n");
	}

	for (int i = n-1; i > 0; i--) {
		for (int j = 1; j <= i; j++) printf("*");
		printf("\n");
	}
}

int main() {
	desenha_triangulo(15);
	return 0;
}
