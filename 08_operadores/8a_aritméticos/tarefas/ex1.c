#include <stdio.h>

float calcular_IMC(float peso_kg, float altura_m) {
	// Implemente a fórmula do cálculo do IMC (Índice de Massa Corporal) e retorne o valor.
	return 0;
}

int main() {
	printf("IMC abaixo do peso: %f\n", calcular_IMC(55, 1.78));
	printf("IMC peso saudável: %f\n", calcular_IMC(70, 1.85));
	printf("IMC sobrepeso: %f\n", calcular_IMC(72, 1.6));
	printf("IMC obeso: %f\n", calcular_IMC(95, 1.710));
	printf("IMC obeso mórbido: %f\n", calcular_IMC(128, 1.745));
}
