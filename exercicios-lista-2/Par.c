//Algoritmo que verificar se o numero digitado pelo usuario � par ou n�o
#include <stdio.h>

int main() {
    int numero = 0;
    
    printf ("Digite um numero: ");
    scanf ("%d", &numero);

    if (numero != 0) {
        if (numero % 2 == 0) {
        	printf("\nO numero %d e par!\n", numero);
        } else {
            printf ("\nO numero %d nao e par!\n", numero);
            }
    } else {
        printf ("\nEntrada INVALIDA!\n");
        }

return 0;

}
