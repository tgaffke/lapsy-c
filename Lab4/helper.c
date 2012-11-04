#include <stdio.h>
#include "helper.h"

void wczytaj_int(char *prompt, int *x) {
	printf("%s", prompt);
	scanf("%d", x);
}

void wczytaj_double(char *prompt, double *x) {
	printf("%s", prompt);
	scanf("%lf", x);
}
