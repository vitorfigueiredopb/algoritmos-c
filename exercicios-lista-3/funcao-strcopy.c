//Função strcpy
#include <stdio.h>

int main () {
    char nome [100], copia [100];
    int i;
    printf ("Digite um texto : ");
    gets (nome);

    for (i = 0; nome[i] != '\0'; i++) {
        copia [i] = nome [i];
    }
    copia [i] = '\0';
    puts (copia);
    puts (nome);

    return 0;
}
