#include <stdio.h>

// Implemente a seguinte função que, dado um int `n`:
// imprime "Fizz" caso o int seja divisível por 3
// imprime "Buzz" caso o int seja divisível por 5
// imprime "FizzBuzz" caso o int seja divisível por 3 E 5
void fizz_buzz(int n) {
	if (n % 3 == 0 && n % 5 == 0) {
		printf("FizzBuzz\n");
	}
	else if (n % 3 == 0) {
		printf("Fizz\n");
	}
	else if (n % 5 == 0) {
		printf("Buzz\n");
	}
}

int main() {
	printf("fizz_buzz(3):\n");
	fizz_buzz(3);
	printf("fizz_buzz(5):\n");
	fizz_buzz(5);
	printf("fizz_buzz(15):\n");
	fizz_buzz(15);
	printf("fizz_buzz(22):\n");
	fizz_buzz(22);
}
