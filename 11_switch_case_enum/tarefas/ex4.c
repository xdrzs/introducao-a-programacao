#include <stdio.h>

void julgamento(unsigned int cm) {
	// Reescreva o trecho de código para que ele tenha EXATAMENTE o mesmo comportamento,
	// porém usando um `switch case` ao invés de um `if else`.
	if (cm == 0 || cm == 1 || cm == 2) {
		printf("Muito pequeninho!\n");
	}
	else {
		printf("Que grandão!\n");
	}
}

int main() {
	unsigned int cms[] = {0, 1, 2, 15, 30, 26380};
	for (int i = 0; i < sizeof(cms)/sizeof(cms[0]); i++) {
		unsigned int cm = cms[i];
		printf("julgamento(%d): ", cm);
		julgamento(cm);
	}
	return 0;
}
