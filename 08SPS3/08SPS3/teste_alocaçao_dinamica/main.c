//Escrever um programa que pergunte ao usuario o tamanho de um vetor de inteiros,
// em seguida  pergunte o valor de cada inteiros, e por fim imprima o vetor de inteiros.

#include <stdio.h>

int main() {
	int rc = 0;
	int * v = NULL;
	int tam;

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);
	v = (int*)malloc(tam * sizeof(int));
	if (v == NULL) {
		rc = 10;
		goto ralo;
	}

	for (int i = 0; i < tam; i++) {
		printf("Digite um numero: ");
		scanf("%d", v + i);

	}
	printf("Vetor: \n");

	for (int i = 0; i < tam; i++) {

		printf("%d \n", v[i]);
	}

ralo:
	if (v != NULL) {
		free(v);
		v = NULL;
	}
	return rc;
}