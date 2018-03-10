#include "stdafx.h"

double h(int j);
double g(int k);


typedef double(*fuction) (int);


int main()
{
	fuction f = g;
	printf("via g: %lf \n", g(4));
	printf("via f: %lf \n", f(4));

	f = h;

	printf("via h: %lf \n",	h(4));
	printf("via f: %lf \n", f(4));

    return 0;
}
double g(int k) {
	return (3.5 * k);
}
double h(int j) {
	return (0.5 * j);
}

