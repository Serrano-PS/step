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

	Criar uma variável 'pessoa' P1 igual a uma das já criadas no vetor de 'pessoa'.

		 Percorrer o vetor de 'pessoa', e comparar cada elemento com P1.

		 Imprimir mensagem informando o índice do vetor onde está o elemento que é igual a P1.

		 Criar uma 'pessoa' P2, diferente de qualquer 'pessoa' que já esteja no vetor.

		 Percorrer o vetor, comparando cada elemento com P2.Imprimir mensagem indicando que P2 não foi encontrado.
	
	
	pessoa vp[TAM];
	cria_pessoa(&vp[0], "Pedro", 19, 10000.);
	cria_pessoa(&vp[1], "Carlos", 56, 10000.);
	procura_pessoa( &p1, TAM,vp);
	procura_pessoa(&p2, TAM, vp);
	


	
	Modificar a 'pesquisa_pessoa' para receber como parâmetro um ponteiro para uma função,
	cujo protótipo (assinatura) é 'int (*) (pessoa const & p1, pessoa const * p2)',
	que deve comparar duas variáveis 'pessoa'. 
Na função 'main' já existete, passar a função 'cmp_pessoa' já criada.
Criar uma outra função de comparação, usando, por exemplo, o campo 'idade' para comparar, 
e usar esta função na chamada de 'pesquisa_pessoa'.

	
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

		
		Na fç 'aula4':

		Escrever 3 funções - f1, f2 e f3, nos arquivos 'inteiro.h' e 'inteiro.c' que
			devem ter o seguinte protótipo : 'int (*) (int , int)', e que devem comparar dos
			inteiros, cada um por um critério diferente, retornando no mesmo padrão de 'strcmp'

			Escrever uma função 'int pesquisa_int(int * vi, int tam, int * index, int procurado, int (*cmp) (int , int)),
			que procure o inteiro 'procurado' no vetor 'vi', de tamanho 'tam', usando a fç 'cmp', e atribuindo a 'index'
			o índice de 'procurado' em 'vi', se 'procurado' for encontrado.Retorna 1 se achou, 0 se não achou

			Perguntar ao usuário qual o tamanho(tamanho) que deve ter um vetor de inteiros

			Alocar o vetor para 'tamanho' inteiros

			Perguntar ao usuário 'tamanho' vezes o valor de cada um dos inteiros, e guardar cada
			inteiro em uma posição do vetor

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



