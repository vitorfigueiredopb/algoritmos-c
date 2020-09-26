#include <stdio.h>

int main() {
	int quantidade = 0;
	int razao;
	int pa = 0;
	
	printf ("Digite a quantidade de elementos da PA: ");
	scanf ("%d", &quantidade);
	printf ("Digite a razao da PA: ");
	scanf ("%d", &razao);
	
	for (int i = 1; i < quantidade; i++) {
		if (i == quantidade) {
			printf ("%d.", pa);
			break;
		}
		printf ("%d, ", pa);
		pa = pa + razao;
	}
	
	return 0;
}
