#include <stdio.h>

// Escreva um sistema de estados para a personagem de um jogo de RPG.
// Os estados possíveis são:
// 	- Nenhum, pegando fogo, envenenado, em câmera lenta, silenciado, enraizado.
// ATENÇÃO: Note que cada estado pode acontecer ao mesmo tempo e seu sistema precisa levar isso em consideração.
// Esse exercício está dividido em 3 partes!

// Parte(1): Defina os valores para o enum de estados
enum Estado {
	NADA,
	PEGANDO_FOGO_bixo,
	ENVENENADO,
	CAMERA_LENTA,
	SILENCIADO,
	ENRAIZADO,
};

// Parte(2): Implemente essa função que, dado um valor `estado`,
// imprime um texto correspondendo ao nome daquele estado
void imprime_estado(enum Estado estado) {
}

// Parte(3): Implemente essa função que, dado um valor de `estados`,
// checa qual estado está presente e o imprime
void estados(int estados) {
	printf("-Estados da personagem:\n");
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
