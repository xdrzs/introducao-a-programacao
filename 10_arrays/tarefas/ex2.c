#include <stdio.h>

#define N 6

int main() {
	int arr[N];
	for (int i = 0; i < N; i++) arr[i] = i+1;

	// Escreva a seguir um algoritmo que inverta os elementos de um array.
	// Por exemplo, para arr[4] = {1,2,3,4}; o algoritmo deve fazer com que:
	// arr[0] == 4, arr[1] == 3, arr[2] == 2, arr[3] == 1


	for (int i = 0; i < N; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	return 0;
}
