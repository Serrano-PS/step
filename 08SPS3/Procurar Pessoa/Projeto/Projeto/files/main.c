/*
Escrever um pgm que:
1 - Leia um arquivo, passado como parâmetro, que tem o seguinte formato:
Primeira linha do arquivo: num-pessoas    OK
Proximas linhas do arquivo: 'num-pessoas' linhas OK
id;nome;idade;cep;salario   OK
2 - Interaja com o usuário, perguntando os dados de novas pessoas.
3 - Ao final da interação, levando em consideração as pessoas lidas do arquivo, e as pessoas informadas pelo usuário, calcular: OK
a - a media salarial OK
b - a media de idade OK
c - qtas pessoas entre 15 e 20 anos; entre 21 e 25; entre 26 e 30; 31 e 35; 36 e 40; e acima de 41 OK
5 - Ao final, escrever na saída padrão: OK
media-salarial;media-idade;num-15-20;num-21-25;num-26-30;num-31-35;num-36-40;num-acima-41
6 - Atualize o arquivo de pessoas com as pessoas informadas
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "ent.h"
#include "bus.h"
#include "per.h"
#include "lista.h"

#define _DEBUG_

int main() {


	const char * _file_name = "./input.txt";
	lista *no = lst_Cria();
	int _qtde = 0;
	int rc = le_pessoas(no, &_qtde, _file_name);
	lst_imprime(no);
	nova_pessoas(no, &_qtde);
	
	printf("\n---------------------------------------Lista atualizada--------------------------------------------\n");
	printf("\n Qtd de pessoas: %d \n"  , _qtde);
	lst_imprime(no);
	media m_sal = 0;
	media m_idade = 0;
	int p_qtde_pes = 0;
	printf("\n-------------------------------------Media salarial e de idade------------------------------------\n");

	calcula_medias(no, _qtde, &m_sal, &m_idade);
	printf("\nMedia salario %.2f", m_sal);
	printf("\nMedia Idade %.2f \n", m_idade);

	printf("\n-----------------------------Qtde de pessoas em um intervalo de idade-----------------------------\n");

	qtde_pessoas(no, _qtde, 15, 20, &p_qtde_pes);
	printf("\nqtd pessoa entre 15 e 20: %d", p_qtde_pes);
	p_qtde_pes = 0;

	qtde_pessoas(no, _qtde, 21, 25, &p_qtde_pes);
	printf("\nqtd pessoa entre 21 e 25: %d", p_qtde_pes);
	p_qtde_pes = 0;

	qtde_pessoas(no, _qtde, 26, 30, &p_qtde_pes);
	printf("\nqtd pessoa entre 26 e 30: %d", p_qtde_pes);
	p_qtde_pes = 0;

	qtde_pessoas(no, _qtde, 31, 35, &p_qtde_pes);
	printf("\nqtd pessoa entre 31 e 35: %d", p_qtde_pes);
	p_qtde_pes = 0;

	qtde_pessoas(no, _qtde, 36, 40, &p_qtde_pes);
	printf("\nqtd pessoa entre 36 e 40: %d", p_qtde_pes);
	p_qtde_pes = 0;

	qtde_pessoas(no, _qtde, 41, 100, &p_qtde_pes);
	printf("\nqtd pessoa acima de 41: %d", p_qtde_pes);
	p_qtde_pes = 0;
	add_pessoa(no, _qtde, _file_name);
}


