//Função strcat
#include <stdio.h>

int main () {

    int i;
    int count = 0;
    char texto1 [50];
    char texto2 [50];

    printf ("Digite um texto: ");
    scanf ("%s", texto1);

    printf ("Digite outro texto: ");
    scanf ("%s", texto2);

    for (i = 0; texto2 [count] != '\0'; i++) {
        if (texto1 [i] == '\0') {
            texto1 [i] = texto2 [count];
            texto1 [i+1] = '\0';
            count++;
        }
    }
    puts (texto1);
    return 0;
}
