#include <stdio.h>

// Escreva um sistema de estados para a personagem de um jogo de RPG.
// Os estados possíveis são:
// 	- Nenhum, pegando fogo, envenenado, em câmera lenta, silenciado, enraizado.
// ATENÇÃO: Note que cada estado pode acontecer ao mesmo tempo e seu sistema precisa levar isso em consideração.
// Esse exercício está dividido em 3 partes!

// Parte(1): Defina os valores para o enum de estados
enum Estado {
	NADA              = 0x0,
	PEGANDO_FOGO_bixo = 0x1,
	ENVENENADO        = 0x2,
	CAMERA_LENTA      = 0x4,
	SILENCIADO        = 0x8,
	ENRAIZADO         = 0x10,
};

// Parte(2): Implemente essa função que, dado um valor `estado`,
// imprime um texto correspondendo ao nome daquele estado
void imprime_estado(enum Estado estado) {
	switch (estado) {
		case NADA: printf("Nada\n");
		case PEGANDO_FOGO_bixo: {
			printf("Pegando fogo\n");
		} break;
		case ENVENENADO: {
			printf("Envenenado\n");
		} break;
		case CAMERA_LENTA: {
			printf("Em câmera lenta\n");
		} break;
		case SILENCIADO: {
			printf("Silenciado\n");
		} break;
		case ENRAIZADO: {
			printf("Enraizado\n");
		} break;
		default: break;
	}
}

// Parte(3): Implemente essa função que, dado um valor de `estados`,
// checa qual estado está presente e o imprime
void estados(int estados) {
	printf("-Estados da personagem:\n");
	if ((estados & PEGANDO_FOGO_bixo) != 0) imprime_estado(PEGANDO_FOGO_bixo);
	if ((estados & ENVENENADO       ) != 0) imprime_estado(ENVENENADO);
	if ((estados & CAMERA_LENTA     ) != 0) imprime_estado(CAMERA_LENTA);
	if ((estados & SILENCIADO       ) != 0) imprime_estado(SILENCIADO);
	if ((estados & ENRAIZADO        ) != 0) imprime_estado(ENRAIZADO);
}

int main() {
	printf("[pegando fogo, envenenado e em câmera lenta]\n");
	estados(PEGANDO_FOGO_bixo | ENVENENADO | CAMERA_LENTA);
	printf("\n");

	printf("[pegando fogo e silenciado]\n");
	estados(PEGANDO_FOGO_bixo | SILENCIADO);
	printf("\n");

	printf("[envenenado e enraizado]\n");
	estados(ENVENENADO | ENRAIZADO);
	printf("\n");

	printf("[enraizado, em câmera lenta e pegando fogo]\n");
	estados(ENRAIZADO | CAMERA_LENTA | PEGANDO_FOGO_bixo);
	printf("\n");

	printf("[pegando fogo, envenenado, em câmera lenta, silenciado e enraizado]\n");
	estados(PEGANDO_FOGO_bixo | ENVENENADO | CAMERA_LENTA | SILENCIADO | ENRAIZADO);
	printf("\n");

	printf("[nada]\n");
	estados(0);
	printf("\n");

	return 0;
}
