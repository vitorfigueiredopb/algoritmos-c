// Algoritmo que verifica se uma palavra é palindromo ou não
#include <stdio.h>

int main () {
    int i, j;
    char texto [50];
    printf ("Digite uma palavra: ");
    scanf ("%s", texto);

    for (i = 0; texto [i] != '\0'; i++);
    i--;
    for (j = 0; j < i; j++) {
        if (toupper (texto [j]) != toupper (texto [i])) {
            printf ("Nao e um palindromo!");
            return 0;
        }
    i--;
    }
    printf ("E um palindromo!");
    return 0;
}
