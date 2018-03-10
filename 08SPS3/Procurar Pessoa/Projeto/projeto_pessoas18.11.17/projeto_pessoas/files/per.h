#ifndef _PER_H_
#define _PER_H_
#define TAM_BUF 512
#include <stdio.h>
#include <stdint.h>

#include "ent.h"

/*
Saida: arquivo 'estatisticas.txt':
media - salarial; media - idade; idade1 idade2 qdte ; idade1 idade2 qdte ;
*/

int grava_medias(FILE * p_file, salario p_media, media p_idade);

int grava_intervalo(FILE * p_file, idade p_ini, idade p_fim, uint16_t p_qtde);

/*
Guardar os parametros de pessoa dentro de seus respectivos lugares no vetor de pessoas

Ler o arquivo p_file_name, que tem o formato descrito abaixo, e povoar o vetor 
p_vet_pessoas, retornando em p_tam o número de pessoas lidas
*/
void le_pessoas(pessoa ** p_vet_pessoas, int * p_tam, const char * p_file_name);



#endif