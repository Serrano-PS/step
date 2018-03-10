#include "ent.h"

int cria_pessoa(pessoa *  p, id _id, char *_nome, idade _idade, salario _salario, char *_cep) {

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
	return 1;
}


int cria_pessoa_str(pessoa * p, const char * const buf) {
	//36;27; Manuela Alves;224244-290;902.80

#define TAM_BUF 15

	char aux[TAM_BUF + 1];

	int i = 0;
	int ultimo_ponto_e_virg = i;
	memset(aux, '\0', TAM_BUF + 1);
	for (; buf[i] != ';'; ++i) {
		aux[i - ultimo_ponto_e_virg] = buf[i];

	}
	p->m_id = atoi(aux);

	i++; //passa do ';'
	ultimo_ponto_e_virg = i;
	memset(aux, '\0', TAM_BUF + 1);
	for (; buf[i] != ';'; ++i) {
		aux[i - ultimo_ponto_e_virg] = buf[i];

	}
	p->m_idade = atoi(aux);

	i++; ultimo_ponto_e_virg = i;
	memset(p->m_nome, '\0', TAM_NOME);
	for (; buf[i] != ';'; ++i) {
		p->m_nome[i - ultimo_ponto_e_virg] = buf[i];
	}

	i++; ultimo_ponto_e_virg = i;
	memset(p->m_cep, '\0', TAM_CEP);
	for (; buf[i] != ';'; ++i) {
		p->m_cep[i - ultimo_ponto_e_virg] = buf[i];
	}

	i++; ultimo_ponto_e_virg = i;
	memset(aux, '\0', TAM_BUF + 1);
	for (; buf[i] != '\0'; ++i) {
		aux[i - ultimo_ponto_e_virg] = buf[i];
	}

	p->m_salario = atof(aux);

	return OK;
}

int imprime_pessoa(const pessoa * p) {
	printf(" id: %d\n idade: %d\n nome: %s\n cep: %s\n salario: %.2f\n ", p->m_id, (int)p->m_idade, p->m_nome, p->m_cep, p->m_salario);
}