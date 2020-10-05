//Função strcmp
#include <stdio.h>

int main () {

    char array1 [50];
    char array2 [50];
    int i;

    printf ("Digite um texto: ");
    scanf ("%s", array1);

    printf ("Digite outro texto: ");
    scanf ("%s", array2);

    for (i = 0; i < 50; i++) {
        if (array1 [i] == '\0') {
            if (array2 [i] == '\0') {
            	break;
            }
            printf ("Sao diferentes.");
            return 0;
        }
        if (toupper (array1 [i]) != toupper (array2 [i])) {
            printf ("Sao diferentes.");
            return 0;
        }
    }
    printf ("Sao iguais!");
    return 0;
}
