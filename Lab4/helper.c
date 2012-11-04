#include <stdio.h>
void wczytaj_int(char *prompt, int *x) {
	printf("%s", prompt);
	scanf("%d", x);
}
