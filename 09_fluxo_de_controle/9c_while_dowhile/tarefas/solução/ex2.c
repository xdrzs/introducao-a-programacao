#include <stdio.h>

// Implemente essa função que imprime os números de 0 até `n`, nesta ordem e,
// os números de n*2 até n, nesta ordem.
// Exemplo:
// 	- espremer(4):
// 		0 8
// 		1 7
// 		2 6
//	    3 5
//	    4 4
void espremer(int n) {
	int l = 0;
	int d = n*2;
	while (l <= d) {
		printf("%d %d\n", l, d);
		l += 1;
		d -= 1;
	}
}

int main() {
	// Agora, use um `while` para espremer do número 1 ao número 6
	int i = 1;
	while ( i <= 6 ) {
		printf("--- espremer(%d):\n", i);
		espremer(i);
		i += 1;
	}
	return 0;
}
