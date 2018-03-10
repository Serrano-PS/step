#include "per.h"
#include "ent.h"
#include "lista.h"

#define TAM_BUF_LEITURA 512

int grava_medias(FILE * p_file, salario p_media, media p_idade) {
	int _rc = fprintf(p_file, "% 10.3f% 10.3f|", p_media, p_idade);
	return (_rc > 0 ? 1 : _rc);
}

int grava_intervalo(FILE * p_file, idade p_ini, idade p_fim, uint16_t p_qtde) {
	int _rc = fprintf(p_file, "% 5d% 5d% 5d;", p_ini, p_fim, p_qtde);
	return 1;
}

int le_pessoas(lista * no, int * p_tam, const char * p_file_name) {

	FILE * _file = fopen(p_file_name, "r");
	if (_file == NULL) {
		printf("Não consegui abrir arquivo 'input.txt' \n");
		return -1;
	}

	char buf[TAM_BUF_LEITURA + 1];

	memset(&buf[0], '\0', TAM_BUF_LEITURA + 1);

	if (fgets(buf, TAM_BUF_LEITURA, _file) == NULL) {
		printf("Não consegui ler qtde de pessoas de 'input.txt' \n");
		return -2;
	}

	printf("Qtde de pessoas: %s\n", buf);

	*p_tam = atoi(buf);

	for (int i = 0; i < *p_tam; i++)
	{


	memset(&buf[0], '\0', TAM_BUF_LEITURA + 1);

	if (fgets(buf, TAM_BUF_LEITURA, _file) == NULL) {
	printf("Não consegui ler qtde de pessoas de 'input.txt' \n");
	return -2;
	}

	pessoa * p = (pessoa *)malloc(sizeof(pessoa));

	cria_pessoa_str(p, buf);

	no = lst_insere(no, p);

	free(p);
	}

	fclose(_file);

	return 1;
	}
int add_pessoa(lista * no, int p_tam, const char * p_file_name)
{
	FILE * _file = fopen(p_file_name, "w");
	if (_file == NULL) {
		printf("Não consegui abrir arquivo 'input.txt' \n");
		return -1;
	}

	lista * p = no;

	fprintf(_file, "%05d\n", p_tam);

	do
	{

		fprintf(_file, "%u;%u;%s;%s;%.2lf\n", p->valor.m_id, p->valor.m_idade, p->valor.m_nome, p->valor.m_cep, p->valor.m_salario);
		p = p->depois;

	} while (p != no);

	fclose(_file);

	return 1;
}

