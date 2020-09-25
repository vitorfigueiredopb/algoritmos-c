#include <stdio.h>

int main() {
	int quantidade = 0;
	int razao;
	int i = 0;
	
	printf ("Digite a quantidade de elementos da PA: ");
	scanf ("%d", &quantidade);
	printf ("Digite a razao da PA: ");
	scanf ("%d", &razao);
	
	for (i = 1; i < quantidade; i = i * razao) {
			printf ("%d, ", i);
	}
	
	printf ("%d.", i);
	
	return 0;
}
