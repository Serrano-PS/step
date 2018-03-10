

int f1(int j1, int j2) {
	if (j1 == j2) {
		return 0;
	}
	if (j1 > j2) {
		return 1;
	}
	return -1;


}

int f2(int j1, int j2) {
	if (j1 == j2 * 2) {
		return 0;
	}
	if (j2 > j1 / 2) {
		return 1;
	}
	return -1;


}

int f3(int j1, int j2) {
	if ((pow(j1, 3)) == (pow(j2, 2))) {
		return 0;
	}
	if ((pow(j1, 3)) < (pow(j2, 2))) {
		return 1;
	}
	return -1;

}

int pesquisa_int(int *vi, int tam, int *index, int procurado, int(*cmp)(int, int)) {
	for (*index = 0; *index <= tam; *index++) {


		if (cmp(procurado, vi[*index]) == 0) {
			return 1;
		}
		return 0;
	}
	return 0;
}
