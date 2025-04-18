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
