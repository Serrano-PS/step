#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "ent.h"

#define _DEBUG_
int main(int argc, char **argv) {
	const char * _file_name = "C:\Users\Pichau\Dropbox\Oi mano\projeto_pessoas_1510255768\projeto_pessoas\files" ;
	FILE * _file = fopen(_file_name, "r");
	if (_file == NULL) {
		printf("Nao foi possivel abrir %s\n", _file_name);
		return 2;
	}
	int menu = 0;
	while (menu != 6) {
		printf("Digite 1 para impressao da lista, 2 para saber a media salarial, 3 para saber a media de idade, 4 para saber quantas pessoas em um certo intervalo de idade, 5 para inserir uma nova pessoa na lista e 6 para sair.");
		scanf("%d", &menu);

		switch (menu)
		{
		case 1:
			printf("Lista do Arquivo: \n");
			break;

		case 2:
			printf("Media Salarial: \n");
			break;

		case 3:
			printf("Media De Idade: \n");
			break;

		case 4:
			printf("Intervalo de idade:\n");
			break;

		case 5:
			printf("Inserindo uma nova pessoa na lista\n");
			break;

		case 6:
			printf("Sair\n");
			break;


		default:
			printf("Valor invalido!\n");
		}
	}
}