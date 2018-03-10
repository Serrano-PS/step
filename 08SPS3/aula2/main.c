
#include <stdio.h>
#define OK 0
#define TAM 5
int f(int * p, int tam);
int g(int * b, int * e);

int main() {

	int m[TAM] = { 8, -1, 4, 308, 123 };
	
	printf("Funcao F: \n");
	f(m, TAM);
	printf("\n\n");
	printf("Funcao G : \n"); 
	g(m, m + TAM);
	

}


int f(int * p, int tam) {
	for (int i = 0; i < tam; i++) {
		printf("m[%d] = %d \n", i, p[i]);
	}
	return OK;
}

int g(int * b, int *e ) {
	for (int *i = b; i != e; i++) {
		printf("m[%d] = %d \n" , i - b, *i);
	}

	return OK;

}
