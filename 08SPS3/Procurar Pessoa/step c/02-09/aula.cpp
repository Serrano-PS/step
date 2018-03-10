#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// declaração da fç, com seus argumentos
int menorValor(int * v, int tam);
//int  indMenorValor(int * v, int tam);
float media(int * v, int tam);
//float mediaEnd(int * v, int tam) {


int main()
{
	int vi[] = { 7,9,5,8,3,10 };

	// chamada da fç, com parâmetos
	int mv = menorValor(vi, 6);
	float md = media(vi, 6);


	//printf("media da notas: = %.1f \n", md);

	printf(" Menor nota:  %d \n Media da nota: %.1f \n ", mv, md);
	
}

// definição da fç, com seus argumentos
int menorValor(int * v, int tam) {
	int menor = 65;
	for (int i = 0; i < tam; i++) {
		if (v[i] < menor) {
			menor = v[i];
		}
	}
	return menor;
}

float media(int * v, int tam) {
	int soma = 0;
	float med = 0;

	for (int i = 0; i < tam; i++) {
		soma = soma + v[i];
	}
	med =  (float) soma/tam;

	return med;


}





