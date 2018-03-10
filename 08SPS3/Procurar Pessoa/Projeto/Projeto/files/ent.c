#include "ent.h"
#include "lista.h"

int cria_pessoa(pessoa *  p, id _id, char *_nome, idade _idade, char *_cep, salario _salario) {

	if (_nome == NULL) {
		return -1;
	}

	if (_cep == NULL) {
		return -3;
	}
	if (strlen(_nome) > TAM_NOME) {
		return -4;
	}
	if (strlen(_cep) > TAM_CEP) {
		return -5;
	}

	strcpy(p->m_nome, _nome);
	strcpy(p->m_cep, _cep);
	p->m_idade = _idade;
	p->m_salario = _salario;
	p->m_id = _id;
	return 1;
}

int cria_pessoa_str(pessoa * p, const char * const buf) {
	// 36;27; Manuela Alves; 22221 - 198; 902.80

	if (buf == NULL)
		return -1;

	char aux[15 + 1];
	int i = 0;
	int ultimo_ponto_e_virg = i;

	memset(aux, '\0', 15);
	for (; buf[i] != ';'; ++i) {
		aux[i] = buf[i];
	}

	p->m_id = atoi(aux);

	++i; // passa do ';'
	ultimo_ponto_e_virg = i;

	memset(aux, '\0', 15);
	for (; buf[i] != ';'; ++i) {
		aux[i - ultimo_ponto_e_virg] = buf[i];
	}

	p->m_idade = atoi(aux);

	++i; // passa do ';'
	ultimo_ponto_e_virg = i;

	memset(p->m_nome, '\0', TAM_NOME);
	for (; buf[i] != ';'; ++i) {
		p->m_nome[i - ultimo_ponto_e_virg] = buf[i];
	}

	//strcpy(p->m_nome,aux);

	++i; // passa do ';'
	ultimo_ponto_e_virg = i;

	memset(p->m_cep, '\0', TAM_CEP);
	for (; buf[i] != ';'; ++i) {
		p->m_cep[i - ultimo_ponto_e_virg] = buf[i];
	}

	//strcpy(p->m_cep, aux);

	++i; // passa do ';'
	ultimo_ponto_e_virg = i;

	memset(aux, '\0', 15);
	for (; buf[i] != '\0'; ++i) {
		aux[i - ultimo_ponto_e_virg] = buf[i];
	}

	p->m_salario = atof(aux);

	return 1;

}


int imprime_pessoa(const pessoa * p) {
	printf("\nPesssoas: \n");
	printf("ID: %d \n", p->m_id);
	printf("Nome: %s \n", p->m_nome);
	printf("Idade: %d \n", (int)p->m_idade);
	printf("CEP: %s \n", p->m_cep);
	printf("Salario: %.2f \n", p->m_salario);

	return OK;
}


int copia_pessoa(pessoa * p_to, const pessoa * p_from) {
	p_to->m_id = p_from->m_id;
	p_to->m_idade = p_from->m_idade;
	p_to->m_salario = p_from->m_salario;
	strcpy(p_to->m_nome, p_from->m_nome);
	strcpy(p_to->m_cep, p_from->m_cep);



	// OK!!
	return 1;
}
int nova_pessoas(lista * no, int * qtd)
{
	char saida;
	int rc;
	id _id = 0;
	idade _idade = 0;
	char _nome[TAM_NOME];
	char _cep[TAM_CEP];
	salario _salario = 0;
	printf("\nDeseja cadastrar uma nova pessoa ? Se sim digite 's' ou 'S', se nao 'n' ou 'N' ");
	scanf("%c", &saida);
	while (saida == 's' || saida == 'S')
	{

		printf("\nDigite o id da nova pessoa:");
		scanf("%u", &_id);

		getchar();

		printf("\nDigite o nome da nova pessoa:");
		scanf("%[^\n]s", _nome);

		getchar();

		printf("\nDigite a idade da nova pessoa:");
		scanf("%u", &_idade);

		getchar();
		
		printf("\nDigite o cep da nova pessoa:");
		scanf("%s",_cep);

		getchar();

		printf("\nDigite o salario da nova pessoa:");
		scanf("%lf", &_salario);

		getchar();

		pessoa * p = (pessoa *)malloc(sizeof(pessoa));
		rc = cria_pessoa(p, _id, _nome, _idade, _cep, _salario);

		if (rc != 1)
			return rc;

		no = lst_insere(no, p);
		free(p);
		if (no == NULL)
			return -1;

		(*qtd)++;
		printf("\nDeseja cadastrar uma nova pessoa ? Se sim digite 's' ou 'S', se nao 'n' ou 'N' ");
		scanf("%c", &saida);

	}
		return 1;
}




