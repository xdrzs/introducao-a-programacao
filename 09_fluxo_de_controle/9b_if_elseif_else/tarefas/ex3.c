#include <stdio.h>

// warm  -> quente
// cold  -> frio
// value -> valor
// Implemente essa função que, dado um double `num` imprime:
// "Warm" se o double `value` está a uma distância de até 5.5(inclusivo) de `num`
// "Cold" caso contrário
void warm_or_cold(double num, double value) {
}

int main() {
	printf("warm_or_cold(10, 5):\n");
	warm_or_cold(10, 5);
	printf("warm_or_cold(-12.1, -6.58):\n");
	warm_or_cold(-12.1, -6.58);
	printf("warm_or_cold(-4.1, 0.225):\n");
	warm_or_cold(-4.1, 0.225);
	return 0;
}
