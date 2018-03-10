#include <string.h>
#include <stdio.h>

#define OK 0
#define TAM_ANO 4

int main() {
	int anoA = 0;
	char ano[TAM_ANO + 1];
	memset(ano, '\o', TAM_ANO + 1);
	printf("Qual o ano atual: ");
	scanf("%d", &anoA);
	printf("Qual o ano do seu nascimento: ");
	scanf("%s", ano);
	int anoI = atoi(ano);
	int idade =anoA - anoI;
	printf("\n Ano do seu nascimento: %s\n", ano);
	printf("\n Sua Idade: %d\n", idade);

	return OK;
}
