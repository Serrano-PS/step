#include<string.h>

#ifndef _PESSOA_H_
#define _PESSOA_H_

#define MAX_TAM_NOME 40



#include <stdio.h>

typedef char nome[MAX_TAM_NOME+1];
typedef int idade;
typedef double salario;

typedef struct pessoa {

	nome _nome;
	idade _idade;
	salario _salario;

}pessoa;

void print_pessoa(pessoa * const p);

//retorna 0 se o nome for maior que TAM, Retorna 1 se o nome for do tamanho permitido 
int cria_pessoa(pessoa *  p, nome p_nome, idade p_idade, salario p_salario);//retorna 0 se o nome for maior que TAM, Retorna 1 se o nome for do tamanho permitido 

int cmp_pessoa(pessoa * const p1, pessoa * const p2);
int aum_sal(pessoa *  p1, salario bonus);
int procura_pessoa(pessoa * p, int tam, pessoa * vp);
int cmp_pessoa_idade(pessoa * p1, pessoa * p2);
int pesquisa_pessoa(pessoa *const v, int tam, pessoa *const p, int *ind, int(*)(pessoa * const, pessoa *const) );
//Revisao





#endif 

