#include <stdio.h>
#include "helper.h"

int main() {
	int a;
	
	wczytaj_int("Liczba całkowita, Sir: ", &a);
	printf("Panie podałeś liczbę całkowitą: %d\n", a);
	
	return 0;
}	
