#include <stdio.h>

enum Day {
	SUNDAY,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY,
};

// Implemente a seguinte função que, dado um dia da semana em inglês,
// imprime o dia da semana em português. Utilize switch case.
void dia_da_semana(enum Day day) {
	switch (day) {
		case SUNDAY:
			printf("Domingo\n");
			break;
		case MONDAY:
			printf("Segunda-feira\n");
			break;
		case TUESDAY:
			printf("Terça-feira\n");
			break;
		case WEDNESDAY:
			printf("Quarta-feira\n");
			break;
		case THURSDAY:
			printf("Quinta-feira\n");
			break;
		case FRIDAY:
			printf("Sexta-feira\n");
			break;
		case SATURDAY:
			printf("Sábado\n");
			break;
		default: break;
	}
}

int main() {
	dia_da_semana(MONDAY);
	dia_da_semana(TUESDAY);
	dia_da_semana(WEDNESDAY);
	dia_da_semana(THURSDAY);
	dia_da_semana(FRIDAY);
	dia_da_semana(SATURDAY);
	dia_da_semana(SUNDAY);
	printf("-------\n");
	dia_da_semana(-29);
	dia_da_semana(10);
	return 0;
}
