//Algitmo que exibe uma lista de pg
#include <stdio.h>

int main () {
	int quantidade, razao;
	int i;
	int cont = 1;
	
	printf ("Digite a quantidade de elementos da PG: ");
	scanf ("%d", &quantidade);
	printf ("Digite a razao da PG: ");
	scanf ("%d", &razao);
	
	for (i = cont; cont < quantidade; i = i * razao) {
		cont++;
		if (i == quantidade || i < 0) {
			printf ("%d.", i);
			return 0;
		}
	printf ("%d, ", i);
	}

	return 0;
}
