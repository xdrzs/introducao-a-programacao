#include <stdio.h>

// Implemente essa função que, dado um int `mes` imprime o nome do mês.
// Por exemplo: mes_do_ano(1) deve imprimir "Janeiro"
void mes_do_ano(int mes) {
	if      (mes == 1)  printf("Janeiro\n");
	else if (mes == 2)  printf("Fevereiro\n");
	else if (mes == 3)  printf("Março\n");
	else if (mes == 4)  printf("Abril\n");
	else if (mes == 5)  printf("Maio\n");
	else if (mes == 6)  printf("Junho\n");
	else if (mes == 7)  printf("Julho\n");
	else if (mes == 8)  printf("Agosto\n");
	else if (mes == 9)  printf("Setembro\n");
	else if (mes == 10) printf("Outubro\n");
	else if (mes == 11) printf("Novembro\n");
	else if (mes == 12) printf("Dezembro\n");
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
