/* Napisz program, który prosi użytkownika o wprowadzenie trzech liczb z klawiatury, a następnie wypisze sumę, iloczyn, najmniejszą i największą z wprowadzonych liczb. */

#include <stdio.h>
#include "helper.h"

int max3(int a, int b, int c);
int min3(int a, int b, int c);

int main () {
	int a, b, c, suma, iloczyn, max, min;
	printf("Podaj trzy licby: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Wczytano trzy liczb: %d, %d, %d\n", a, b, c); 	
	
	suma = a + b + c;
	printf("Suma podanych liczb to: %d\n", suma);
	
	iloczyn = a * b * c;
	printf("Iloczyn podanych liczb to: %d\n", iloczyn);
	
	max = max3(a, b, c);
	min = min3(a, b, c);
  printf("Największa liczba to: %d\n", max);
  printf("Najmniejsza liczba to: %d\n", min);
  		
	return 0;
}

int max3(int a, int b, int c) {
	int m = a;
	if (m < b) 
		m = b;
	if (m < c)
		m = c;
	return m;	
}

int min3(int a, int b, int c) {
	int m = a;
	if (m > b) 
		m = b;
	if (m > c)
		m = c;
	return m;	
}
