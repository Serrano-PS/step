#include "Pessoa.h"

int main()
{
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

		 Percorrer o vetor de 'pessoa', e comparar cada elemento com P1.Imprimir mensagem informando o índice do vetor onde está o elemento que é igual a P1.

		 Criar uma 'pessoa' P2, diferente de qualquer 'pessoa' que já esteja no vetor.

		 Percorrer o vetor, comparando cada elemento com P2.Imprimir mensagem indicando que P2 não foi encontrado.
	*/
	pessoa vp[2];
	cria_pessoa(&vp[0], "Pedro", 19, 10000.);
	cria_pessoa(&vp[1], "Carlos", 56, 10000.);

	int n = cmp_pessoa(&p1, &p2, &vp[0], &vp[1]);
	aum_sal(&vp[0], 2500.);
	if (n == 1) {
		printf("\np1 maior que p2\n");
	}
	else if (n == 0) {
		printf("\np1 = p2\n");
	}
	else {
		printf("\np2 maior que p1\n");
	}
	
}

}
}