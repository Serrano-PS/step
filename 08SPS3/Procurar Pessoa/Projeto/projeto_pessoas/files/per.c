#include "per.h"

int grava_medias(FILE * p_file, salario p_media, media p_idade) {
	int _rc = fprintf(p_file, "% 10.3f% 10.3f|", p_media, p_idade);
	return (_rc > 0 ? 1 : _rc);
}

int grava_intervalo(FILE * p_file, idade p_ini, idade p_fim, uint16_t p_qtde) {
	int _rc = fprintf(p_file, "% 5d% 5d% 5d;", p_ini, p_fim, p_qtde);
	return 1;
}

void le_pessoas(pessoa ** p_vet_pessoas, int * p_tam, const char * p_file_name) {
	/*

	2
	36;20;Manuela Alves;22221-198;982.88
	4;40;Gustavo Lins;01002-981;19239.15

	*/
	
	FILE * _file = fopen(p_file_name, "r");
	if (_file == NULL) {
		return -1;

	}

	char buf[TAM_BUF + 1];

	memset(&buf[0], '\0', TAM_BUF + 1);

	if (fgets(buf, TAM_BUF, _file) == NULL) {

		return -2;
	}

	*p_vet_pessoas = malloc((*p_tam) * sizeof(pessoa)); //PAROU AQUI (VOCÊ DIGITOU ESSA LINHA)

}


//int fc_guarda_pessoas(int const p_num, pessoa * p_vet, char * buf) {    ///você parou nessa função aqui, deverá guardar as informações de pessoa dentro do vetor
//	// 38;25;Miguel Antonio;32;11924-021;4502.12
//	int coluna_atual = 0;
//	int index = 0;
//	char aux[15 + 1];
//	int ultimo_pv = 0;
//
//	for (int i = 0; i < 5; i++) {
//		aux[i - ultimo_pv] = buf[i];
//
//		while (buf[coluna_atual] != ";") {
//
//			switch (index) {
//			case 0:
//				p_vet->m_id = atoi(aux);
//				break;
//			case 1:
//				p_vet->m_idade = atoi(aux);
//				break;
//			case 2:
//				break;
//			case 3:
//				break;
//			case 4:
//				break;
//			default:
//				return -1;
//
//
//			}
//
//			coluna_atual = i+1;
//
//
//		}
//
//		++index; //passa para a próxima informação dee pessoa 
//
//	}
//
//
//
//}