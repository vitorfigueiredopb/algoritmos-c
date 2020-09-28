//Algitmo que exibe uma lista de pa
#include <stdio.h>

int main() {
	int quantidade, razao;
	int pa = 0;
	int i;
	
	printf ("Digite a quantidade de elementos da PA: ");
	scanf ("%d", &quantidade);
	printf ("Digite a razao da PA: ");
	scanf ("%d", &razao);
	
	for (i = 1; i <= quantidade; i++) {
		if (i == quantidade) {
			printf ("%d.", pa);
			break;
		}
		printf ("%d, ", pa);
		pa += razao;
	}
	
	return 0;
}
