
#include "teste_per.h"
#include "ent.h"
#include <stdio.h>
#include <string.h>

void teste_per_out() {
	FILE * _file = fopen("./estatisticas.txt", "w");

	if (grava_medias(_file, (salario)2148.324, (media)15.769) == 1) {
		printf("OK\n");
	}
	else {
		printf("! OK\n");
	}

	if (grava_intervalo(_file, 15, 20, 8) == 1) {
		printf("OK 15,20,8\n");
	}
	else {
		printf("! OK 15,20,8\n");
	}


	if (grava_intervalo(_file, 21, 25, 12) == 1) {
		printf("OK 21, 25, 12\n");
	}
	else {
		printf("! OK 21, 25, 12\n");
	}

	if (grava_intervalo(_file, 26, 30, 31) == 1) {
		printf("OK 26, 30, 31\n");
	}
	else {
		printf("! OK 26, 30, 31\n");
	}

	fclose(_file);

}


//Primeira linha do arquivo: num - pessoas
//Proximas linhas do arquivo : 'num-pessoas' linhas
//id; nome; idade; cep; salario



void teste_per() {
	teste_per_out();
}
