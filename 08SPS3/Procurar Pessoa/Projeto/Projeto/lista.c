#include "lista.h"

lista* lst_Cria() 
{

	lista * novo = (lista *)malloc(sizeof(lista));

	if (novo == NULL)
		return NULL;

	novo->antes = NULL;
	novo->depois = NULL;

	return novo;
	
}

lista* lst_insere(lista * lst, const pessoa * p)
{

	if (lst->antes == lst->depois && lst->antes == NULL)
	{
		if (copia_pessoa(&(lst->valor), p) != 1) {
			return NULL;
		}
		lst->antes = lst;
		lst->depois = lst->antes;
		
	}
	else
	{
		lista * novo = lst_Cria(); 

		if (novo == NULL)
			return NULL;

		if (copia_pessoa(&(novo->valor), p) != 1) {
			free(novo);
			return NULL;
		}


		lst->antes->depois = novo;
		novo->antes = lst->antes;
		novo->depois = lst;
		lst->antes = novo;

	}

	return lst;
}



void lst_imprime(lista * lst)
{
	lista * aux = lst;

	do
	{

		printf("%s \n", aux->valor);
		aux = aux->depois;

	} while (aux != lst);
}



