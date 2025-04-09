#include <stdio.h>

// Implemente as fórmulas corretamente para cada função a seguir:
float converter_celcius_para_fahrenheit(float celcius) {
	return (9 * celcius / 5) + 32;
}

float converter_fahrenheit_para_celcius(float fahrenheit) {
	return 5 * (fahrenheit-32) / 9;
}

int main() {
	float celcius = 30;
	printf("Em fortaleza está %f graus celcius, ou seja %f fahrenheit.\n", celcius, converter_celcius_para_fahrenheit(celcius));

	float fahrenheit = 70;
	printf("Já em Nova Iorque está %f graus fahrenheit, ou seja %f celcius.\n", fahrenheit, converter_fahrenheit_para_celcius(fahrenheit));
}
