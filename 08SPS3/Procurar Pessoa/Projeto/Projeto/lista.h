#ifndef PROGRAMINHA
#define PROGRAMINHA 
#include "ent.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct lista {



	struct lista* antes;

	//int valor; 

	// isto acima virou isto abaixo

	pessoa valor;

	struct lista* depois;


} lista;

lista* lst_Cria();

// TOOO
void del_Lista(lista** primeiro);

lista* lst_insere(lista * lst, const pessoa * p);

void lst_imprime(lista * lst);

#endif 