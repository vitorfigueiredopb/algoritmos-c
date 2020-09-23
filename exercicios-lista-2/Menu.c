#include <stdio.h>

int main (){
    int opcao;
    while(opcao != 0){
        printf("OPCAO 1 \n");
        printf("OPCAO 2 \n");
        printf("OPCAO 3 \n");
        printf("OPCAO 4 \n");
        printf("OPCAO 5 \n");
        printf("OPCAO 6 \n");
        printf("OPCAO 7 \n");
        printf("OPCAO 8 \n");
        printf("OPCAO 9 \n");
        printf("OPCAO 0 \n\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
        case 0:
            printf("\nObrigado por usar meu programa, ate a proxima!\n");
            break;
        case 1:
          printf("\nOpcao escolhida: 1\n");
          break;
        case 2:
          printf("\nOpcao escolhida: 2\n");
          break;
        case 3:
          printf("\nOpcao escolhida: 3\n");
          break;
        case 4:
          printf("\nOpcao escolhida: 4\n");
          break;
        case 5:
          printf("\nOpcao escolhida: 5\n");
          break;
        case 6:
          printf("\nOpcao escolhida: 6\n");
          break;
        case 7:
          printf("\nOpcao escolhida: 7\n");
          break;
        case 8:
          printf("\nOpcao escolhida: 8\n");
          break;
        case 9:
          printf("\nOpcao escolhida: 9\n");
          break;
        default:
          printf("\nOpcao escolhida invalida!\n");
          break;
        }
    }
    return 0;
}
