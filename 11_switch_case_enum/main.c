#include <stdio.h>

// enum: enumeration -> enumeração
enum Cor {
	PRETO,
	BRANCO,
	VERMELHO,

	AZUL = 10,
	VERDE,
};

int main() {

	int x = 3;
	/*
	if (x == 0) printf("Caso 0\n");
	else if (x == 1) {
		int y = 5;
		printf("y = %d\n", y);
	}
	else if (x == 2) {
		printf("Caso 2\n");
	}
	else {
		printf("Nada\n");
	}
	*/

	// switch -> trocar
	switch (x) {
		// case -> caso
		case 0: printf("Caso 0\n"); break;
		// fallthrough -> queda

		case 1: {
			int y = 5;
			printf("y = %d\n", y);
		} break;

		case 2: {
			printf("Caso 2\n");
			break;
		}

		// default -> padrão
		default:
			printf("Nada\n");
	}
	printf("Final\n");


	printf("PRETO = %d\n", PRETO);
	printf("BRANCO = %d\n", BRANCO);
	printf("VERMELHO = %d\n", VERMELHO);
	printf("AZUL = %d\n", AZUL);
	printf("VERDE = %d\n", VERDE);

	enum Cor cor = PRETO;
	cor = VERMELHO;

	cor = BRANCO;
	printf("cor = %d\n", cor);

	switch (cor) {
		case PRETO: {
			printf("Preto\n");
			break;
		}

		case BRANCO: {
			printf("Branco\n");
			break;
		}

		default:
			printf("Nem preto nem branco\n");
	}

	// flag -> bandeira
	// int -> 32
	// feature flag (botão novo)

	enum Config {
		NONE = 0,
		BUTTON_A = 0x1, // 001
		BANNER_B = 0x2, // 010
		
		// AD: advertisemint -> propaganda; new -> novo
		AD_NEW   = 0x4, // 100
	};

	// user -> usuário
	enum Config user_config = 0;
	user_config = BUTTON_A | AD_NEW; // 101

	if ( (user_config & BUTTON_A) != 0 ) {
		printf("Usuário vê o botão A\n");
	}

	if ( (user_config & AD_NEW) != 0 ) {
		printf("Usuário vê a propaganda nova\n");
	}

	return 0;
}