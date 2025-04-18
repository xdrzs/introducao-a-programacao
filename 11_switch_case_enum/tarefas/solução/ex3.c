#include <stdio.h>

#define N 6

// Temos uma personagem 'x' em um tabuleiro quadrado em grade, no qual '0' representa uma posição
// vazia. Faça com que a personagem 'x' chegue até o seu alvo 't' usando o que foi aprendido em aula.
// Esse exercício esta separado em 3 partes!

// Parte(1): Aqui defina um enum para representar as quatro direções cardeais
enum Instruction {
	NORTE,
	LESTE,
	SUL,
	OESTE,
};

int main() {
	int pos[2]    = {5,4};
	int target[2] = {3,2};

	// Parte(2): Aqui, inicialize um array de instrucoes `instructions` para que a personagem saia de sua posição
	// inicial `pos` e chegue até a posição final `target`.
	enum Instruction instructions[] = {OESTE,NORTE,NORTE,OESTE};
	// instruction -> instrução
	for (int i = 0; i < sizeof(instructions)/sizeof(instructions[0]); i += 1) {
		for (int y = 0; y < N; y += 1) {
			for (int x = 0; x < N; x += 1) {
				if (pos[0] == x && pos[1] == y && target[0] == x && target[1] == y) {
					putchar('V');
				}
				else if (pos[0] == x && pos[1] == y) {
					putchar('x');
				}
				else if (target[0] == x && target[1] == y){
					putchar('t');
				}
				else {
					putchar('0');
				}
			}
			putchar('\n');
		}
		printf("-------------------------\n");

		// Parte(3): Aqui, escreva um algoritmo que, dada uma instrução, mova a personagem
		// uma casa de distância naquela direção representada pela instrução.
		enum Instruction instruction = instructions[i];
		switch (instruction) {
			case NORTE: pos[1] -= 1; break;
			case LESTE: pos[0] += 1; break;
			case SUL  : pos[1] += 1; break;
			case OESTE: pos[0] -= 1; break;
			default:
				printf("instruction = %d\n", instruction);
				return 420;
		}
	}

	if (pos[0] != target[0] || pos[1] != target[1]) {
		printf("Errouuuuu:\n");
	}
	else {
		printf("Acertoouuuuuu:\n");
	}

	for (int y = 0; y < N; y += 1) {
		for (int x = 0; x < N; x += 1) {
			if (pos[0] == x && pos[1] == y && target[0] == x && target[1] == y) {
				putchar('V');
			}
			else if (pos[0] == x && pos[1] == y) {
				putchar('x');
			}
			else if (target[0] == x && target[1] == y){
				putchar('t');
			}
			else {
				putchar('0');
			}
		}
		putchar('\n');
	}

	return 0;
}
