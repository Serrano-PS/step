// teste.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>



void percorre_matriz_1(int * const m, int tam, int target, int(*f) (int, int)) {
	int * end = m + tam;

	for (int *p = m; p != end; ++p) {
		if (f(*p, target) == 1)
		{
			break;
		}

	}
}
void percorre_matriz(int * const m, int tam, void(*f) (int)) {
	int * end = m + tam;
	
	for (int *p = m; p != end; ++p) {
		f(*p);
			}

}

void imprime_1(int i) {

	printf("%d ", i);
}

void imprime_2(int i) {

	printf("\no valor eh %d\n ", i);
}

void par_impar(int p) {
	if (p % 2 == 0) {
		printf("\no %d eh par \n ", p);
	}
	else {
		printf("\no %d nao eh par \n", p );
	}

}

int alvo(int p, int i) {
	if (p <= i) {
		printf("\no %d eh menor que %d \n ", p, i);
	}
	else {
		printf("\no %d nao eh menor que %d \n", p, i);
	}
	return 0;
}
int M = -9999;
void maior(int p) {

	
	if (p > M) {
		M = p;
		
	}


}


int main()
{
	int matriz[] = { -7,13,19,213,2 };
	percorre_matriz(matriz, sizeof(matriz) / sizeof(int), imprime_1);
	printf("\n************************************************************************************\n");
	percorre_matriz(matriz, sizeof(matriz) / sizeof(int), imprime_2);
	printf("\n************************************************************************************\n");
	percorre_matriz(matriz, sizeof(matriz) / sizeof(int), par_impar);
	printf("\n************************************************************************************\n");
	percorre_matriz_1(matriz, sizeof(matriz) / sizeof(int), 213, alvo);
	printf("\n************************************************************************************\n");
	percorre_matriz(matriz, sizeof(matriz) / sizeof(int), maior);
	printf(" \n O maior numero eh: %d \n", M);
	return 0;


}


