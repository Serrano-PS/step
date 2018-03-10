#include <stdio.h>
#include "Pessoa.h"

void print_pessoa(pessoa * const p)
{

	printf("\nNome: %s\nIdade: %d\nSalario: %.2f", p->_nome, p->_idade, p->_salario);
	
}


int cria_pessoa(pessoa * const p, nome p_nome, idade p_idade, salario p_salario)
{
	if (strlen(p_nome) < MAX_TAM_NOME)
	{
		strcpy(p->_nome, p_nome);
		p->_idade = p_idade;
		p->_salario = p_salario;
		return 1;
	}
	return 0;
}

int cmp_pessoa(pessoa * const p1, pessoa * const p2)
{
	
	return strcmp(p1->_nome, p2->_nome);  // 0, 1, -1
}
int aum_sal(pessoa *  p1, salario bonus)
{
	return p1->_salario += bonus;
}
