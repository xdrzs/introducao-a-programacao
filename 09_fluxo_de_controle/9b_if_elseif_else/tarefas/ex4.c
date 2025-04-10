#include <stdio.h>

// Implemente essa função que, dado um int `mes` imprime o nome do mês.
// Por exemplo: mes_do_ano(1) deve imprimir "Janeiro"
void mes_do_ano(int mes) {
}

int main() {
	printf("Janeiro: ");
	mes_do_ano(1);

	printf("Fevereiro: ");
	mes_do_ano(2);

	printf("Março: ");
	mes_do_ano(3);

	printf("Abril: ");
	mes_do_ano(4);

	printf("Maio: ");
	mes_do_ano(5);

	printf("Junho: ");
	mes_do_ano(6);

	printf("Julho: ");
	mes_do_ano(7);

	printf("Agosto: ");
	mes_do_ano(8);

	printf("Setembro: ");
	mes_do_ano(9);

	printf("Outubro: ");
	mes_do_ano(10);

	printf("Novembro: ");
	mes_do_ano(11);

	printf("Dezembro: ");
	mes_do_ano(12);

	printf("Daqui pra baixo não pode imprimir nada:\n");
	mes_do_ano(13);
	mes_do_ano(0);
	return 0;
}
