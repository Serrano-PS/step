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

void le_pessoas(FILE const * _file, char const _path, pessoa ** p_vet);



#endif