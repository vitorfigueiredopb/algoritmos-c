//Verificar se o ano digitado � bissexto ou n�o
#include <stdio.h>

int main() {
	int ano = 0;
	
	printf ("Digite o ano a ser verificado: ");
	scanf ("%d", &ano);
	
	if (ano >= 1582) {
		if (ano % 4 == 0) {
			printf ("\nO ano %d e bissexto!", ano);
		} else {
			printf ("\nO ano %d nao e bissexto!", ano);
		}
	} else {
		printf ("Ano digitado invalido!");
	}
	
	return 0;
}
