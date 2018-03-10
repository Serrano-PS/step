#include <stdio.h>
#include <string.h>

#define TAM_NOME 50+1

typedef double salario;

typedef struct  pessoa {
	char * nome[TAM_NOME];
	int idade;
	char sexo;
	salario _salario;

}pessoa;

int inicializa_pessoa(pessoa * p, char * nome, int idade, char sexo, salario _salario);
void imprime_pessoa(pessoa * p);
void copia_pessoa(pessoa *p1, pessoa *p2);

int main() {
	pessoa p1;
	pessoa p2;
	pessoa p3;
	inicializa_pessoa(&p1, "Pedro Serrano", 20, 'M', 2321.42);
	inicializa_pessoa(&p2, "Carlos Alberto", 54, 'M', 2318.89);
	inicializa_pessoa(&p3, "Maria Cristina", 56, 'F', 8453.43);
	imprime_pessoa(&p1);
	imprime_pessoa(&p2);
	imprime_pessoa(&p3);
	return 0;
}

void copia_pessoa(pessoa *p1, pessoa *p2) {

	p1->idade = p2->idade;
	p1->sexo = p2->sexo;
	p1->_salario = p2->_salario;
	strcpy(p1->nome, p2->nome);

}

void imprime_pessoa(pessoa * p) {

	printf("Nome: %s \n", p->nome);
	printf("Idade: %d \n", p->idade);
	printf("Sexo: %c \n", p->sexo);
	printf("Salario: %.2f \n\n", p->_salario);
	}

int inicializa_pessoa(pessoa * p, char * nome, int idade, char sexo, salario _salario) {

	p->idade = idade;
	p->sexo = sexo;
	p->_salario = _salario;
	strcpy(p->nome, nome);


}