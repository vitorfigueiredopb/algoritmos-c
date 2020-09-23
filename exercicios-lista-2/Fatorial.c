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
		for (i = fatorial - 1; i != 0; i--) {
			printf ("%d! * %d! = ", fatorial, i);
		    fatorial = fatorial * i;
		}
	printf ("%d", fatorial);
	}
	else {
		printf ("\nNumero invalido!");
	}
	
    return (0);
}
