#include "Pessoa.h"

#define TAM 2

int main()
{/*
	pessoa p1;
	pessoa p2;

	cria_pessoa(&p1, "Pedro", 19, 10000.);
	cria_pessoa(&p2, "Lucas", 17, 10500.);
	int n = cmp_pessoa(&p1, &p2);
	aum_sal(&p1, 2500.);
	if (n == 1) {
		printf("\np1 maior que p2\n");
	}
	else if (n == 0) {
		printf("\np1 = p2\n");
	}
	else {
		printf("\np2 maior que p1\n");
	}

	printf("%d\n", n);
	print_pessoa(&p1);
	print_pessoa(&p2);

	//Outra parte
/*

	Criar uma vari�vel 'pessoa' P1 igual a uma das j� criadas no vetor de 'pessoa'.

		 Percorrer o vetor de 'pessoa', e comparar cada elemento com P1.

		 Imprimir mensagem informando o �ndice do vetor onde est� o elemento que � igual a P1.

		 Criar uma 'pessoa' P2, diferente de qualquer 'pessoa' que j� esteja no vetor.

		 Percorrer o vetor, comparando cada elemento com P2.Imprimir mensagem indicando que P2 n�o foi encontrado.
	
	
	pessoa vp[TAM];
	cria_pessoa(&vp[0], "Pedro", 19, 10000.);
	cria_pessoa(&vp[1], "Carlos", 56, 10000.);
	procura_pessoa( &p1, TAM,vp);
	procura_pessoa(&p2, TAM, vp);
	


	
	Modificar a 'pesquisa_pessoa' para receber como par�metro um ponteiro para uma fun��o,
	cujo prot�tipo (assinatura) � 'int (*) (pessoa const & p1, pessoa const * p2)',
	que deve comparar duas vari�veis 'pessoa'. 
Na fun��o 'main' j� existete, passar a fun��o 'cmp_pessoa' j� criada.
Criar uma outra fun��o de compara��o, usando, por exemplo, o campo 'idade' para comparar, 
e usar esta fun��o na chamada de 'pesquisa_pessoa'.

	
	int ind = -1;

	if (pesquisa_pessoa(vp, TAM, &p1, &ind, cmp_pessoa_idade) == 1) {
		printf("ACHOU NO P1");
	}
	else {
		printf("NAO ACHOU NO P1");
	}
	
	if (pesquisa_pessoa(vp, TAM, &p2, &ind, cmp_pessoa_idade) == 1) {
		printf(" ACHOU NO P2");
	}
	else {
		printf("NAO ACHOU NO P2");
	}

	{
		pessoa *p3 = NULL;
	
		p3 = (pessoa *)malloc(3 * sizeof(pessoa));

		if (p3== NULL){
			printf("ERRO ALOCANDO");
		}
		 
		cria_pessoa(&p3[0], "Igor", 17, 10000.);
		cria_pessoa(&p3[1], "Canellas", 30, 20000.);
		cria_pessoa(&p3[2], "Rodrigo", 15, 30000.);
		printf("\n\n\n");
		print_pessoa(&p3[0]);
		printf("\n\n\n");
		print_pessoa(&p3[1]);
		printf("\n\n\n");
		print_pessoa(&p3[2]);
		printf("\n\n\n");

		free(p3);

		//AULA 4

		
		Na f� 'aula4':

		Escrever 3 fun��es - f1, f2 e f3, nos arquivos 'inteiro.h' e 'inteiro.c' que
			devem ter o seguinte prot�tipo : 'int (*) (int , int)', e que devem comparar dos
			inteiros, cada um por um crit�rio diferente, retornando no mesmo padr�o de 'strcmp'

			Escrever uma fun��o 'int pesquisa_int(int * vi, int tam, int * index, int procurado, int (*cmp) (int , int)),
			que procure o inteiro 'procurado' no vetor 'vi', de tamanho 'tam', usando a f� 'cmp', e atribuindo a 'index'
			o �ndice de 'procurado' em 'vi', se 'procurado' for encontrado.Retorna 1 se achou, 0 se n�o achou

			Perguntar ao usu�rio qual o tamanho(tamanho) que deve ter um vetor de inteiros

			Alocar o vetor para 'tamanho' inteiros

			Perguntar ao usu�rio 'tamanho' vezes o valor de cada um dos inteiros, e guardar cada
			inteiro em uma posi��o do vetor

			Usar f1, f2 e f3 em 'vi'
		*/
	

f1(5, 3);
f2(15, 34);
f3(12, 21);
int *v = NULL;
int	tam = NULL;
int procurado = NULL;
		
		printf("Tamanho do vetor: ");
		scanf("%i", tam);
		for (int i = 0; i < tam; i++) {
			printf("O valor a ser inserido no vetor: ");
			scanf("%i", &v[i]);
		}
		printf("Valor procurado: ");
		scanf("%i", &procurado);

		pesquisa_int(&v, tam, 0, procurado, f1);
		pesquisa_int(&v, tam, 0, procurado, f2);
		pesquisa_int(&v, tam, 0, procurado, f3);
		return 0;

	}



