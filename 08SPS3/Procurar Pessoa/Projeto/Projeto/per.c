#include "per.h"


int grava_medias(FILE * p_file, salario p_media, media p_idade) {
	int _rc = fprintf(p_file, "% 10.3f% 10.3f|", p_media, p_idade);
	return (_rc > 0 ? 1 : _rc);
}

int grava_intervalo(FILE * p_file, idade p_ini, idade p_fim, uint16_t p_qtde) {
	int _rc = fprintf(p_file, "% 5d% 5d% 5d;", p_ini, p_fim, p_qtde);
	return 1;
}


int to_int(const char * buf, int * i) {

	//for (const char *p = buf; (((*p) != '\0') || ((*p) != '\n')); p++) {
	const char *p = buf;
	while (1) {

		if ( ( (*p) == '\0') || ( (*p) == '\n' ) ) {
			break;
		}

		if (isdigit(*p) == 0)
		{
			return -22;
		}

		++p;
	}
	*i = atoi(buf);
	return 0;
}
int le_pessoas(pessoa **  vet_pessoa, int * p_tam, const char * p_file_name) {
	FILE * _file = fopen_s(p_file_name, "nput.txt", "r");
	if (_file == NULL) {
		printf("Não consegui achar  abrir o arquivo 'input.txt' \n");
		return -1;
	}
	/*
		2
		36;42;Manuela Alves;22221-198;902.08
		4;19;Gustavo Lins;01002-981;19239.15
	*/

	char buf[TAM_BUF + 1];

	memset(&buf[0], '\0', TAM_BUF + 1);
	if (fgets(buf, TAM_BUF, _file) == NULL) {
		return -2;
	}
	int rd = to_int(buf, p_tam);
	/**p_tam = atoi(buf);*/
	if (rd != 0) {
		printf("Erro  aqui oh %d", rd);
		return -6;
	}

	*vet_pessoa = (pessoa *)malloc((*p_tam) * sizeof(pessoa));
	if (*vet_pessoa == NULL) {
		return -3;
	}


	for (int i = 0; i < *p_tam; ++i) {
		memset(&buf[0], '\0', TAM_BUF + 1);
		if (fgets(buf, TAM_BUF, _file) == NULL) {
			return -4;
		}
		if (cria_pessoa_str(&(*vet_pessoa)[i], buf) != 1) {
			return -5;
		}

	}
	return OK;
}










