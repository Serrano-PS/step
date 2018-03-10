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
int procura_pessoa( pessoa * p, int tam,  pessoa * vp )
{
for (int i = 0; i <= 2; i++) {
	//Comparando o P1 com vp[i]
	int cmp = cmp_pessoa(p, &vp[i]);
	if (cmp == 1) {
		printf("\np1 maior que vp[%d]\n", i);
	}
	else {
		printf("Não achou");
	}
	//Comparando o P2 com vp[i]
	cmp = cmp_pessoa(p, &vp[i]);
	if (cmp == 0) {
		printf("\np2 = vp[%d]\n", i);
	}
	else {
		printf("Não achou");
	}

}
}
int cmp_pessoa_idade(pessoa * p1, pessoa * p2) {
	if (p1->_idade > p2->_idade) {
		return 1;
	}
	if (p1->_idade == p2->_idade) {
		return 0;
	}
	return -1;
}

int pesquisa_pessoa(pessoa *const v, int tam, pessoa *const p, int *ind, int(*cmp)(pessoa * const, pessoa *const))
{
	for (int i = 0; i <= 2; i++) {
		//Comparando o P1 com vp[i]
		
		if (cmp(p, &v[i]) == 0) {
			return 1;
		}
		////Comparando o P2 com vp[i]
		//cmp = cmp_pessoa(p, &v[i]);
		//if (cmp == 0) {
		//	printf("\np2 = vp[%d]\n", i);
		//}
		//else {
		//	printf("Não achou");
		//}

	}
	return 0;

}


