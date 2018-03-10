#include "bus.h"
#include "ent.h"
#include "lista.h"

int calcula_medias(lista *  no, uint16_t p_qtde, media * p_media_sal, media * p_media_idade)
{
	if (no == NULL)
		return -1;

	if (p_media_sal == NULL)
		return -2;

	if (p_media_idade == NULL)
		return -3;

	lista * aux = no;
	


	*p_media_sal = 0.;
	*p_media_idade = 0.;
	do

	{
		*p_media_sal += aux->valor.m_salario;
		*p_media_idade += aux->valor.m_idade;
		aux = aux->depois;

	} while (aux != no);
	*p_media_sal /= p_qtde;
	*p_media_idade /= p_qtde;

	return 1;
}

int qtde_pessoas(lista *  no, uint16_t p_qtde, idade p_inicial, idade p_final, uint16_t * p_qtde_pes)
{
	if (no == NULL)
		return -1;

	if (p_qtde_pes == NULL)
		return -2;

	lista * aux = no;
	*p_qtde_pes = 0;

	
	do
	{
		if ((aux->valor.m_idade >= p_inicial) && (aux->valor.m_idade <= p_final))
			(*p_qtde_pes)++;
		aux = aux->depois;
	} while (aux !=no);

	return 1;
}