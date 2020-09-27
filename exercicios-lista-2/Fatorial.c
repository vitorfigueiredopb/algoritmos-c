//Calcular o fatorial de um numero
#include <stdio.h>

int main() {
	int fatorial = 0;
    int i = 0;
    
    printf ("Digite um numero: ");
    scanf ("%d", &fatorial);
    
    if (fatorial == 0 || fatorial == 1) {
    	printf ("%d! = %d", fatorial, fatorial);
	}
	else if (fatorial > 0) {
		printf ("\nFatorial de %d: %d! = %d * ", fatorial, fatorial, fatorial);
		for (i = fatorial - 1; i != 0; i--) {
			fatorial = fatorial * i;
			if (i == 1) {
				printf ("%d ", i);
			} else {
				printf ("%d * ", i);
			}
		}
	printf ("= %d\n", fatorial);
	}
	else {
		printf ("\nNumero invalido!");
	}
	
    return (0);
}
