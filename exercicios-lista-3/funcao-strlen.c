//Função strlen
#include <stdio.h>

int main () {
    int i;
    char texto1 [50];

    printf ("Digite um texto: ");
    scanf ("%s", texto1);
    
    for (i = 0; texto1 [i] != '\0'; i++);

    printf ("%d", i);
    return 0;
}
