#include <stdio.h>

int main() {
	int quantidade = 0;
	int razao;
	int i = 0;
	int pa = 0;
	
	printf ("Digite a quantidade de elementos da PA: ");
	scanf ("%d", &quantidade);
	printf ("Digite a razao da PA: ");
	scanf ("%d", &razao);
	
	for (i = 0; i < quantidade; i++) {
		printf ("%d, ", pa);
		pa = pa + razao;
	}
	
	return 0;
}
