#ifndef _INTEIRO_H_
#define _INTEIRO_H_
#include<string.h>
#include <stdio.h>
#include <math.h>

int(*h)(int, int);

int f1(int, int);
int f2(int, int);
int f3(int, int);
int pesquisa_int(int *vi, int tam, int *index, int procurado, int(*cmp)(int, int));
 





#endif