#include <stdio.h>
#include "helper.h"
#include "helper.c"

void wczytaj_int(char *prompt, int *x);

int main()
{
  int licz1, licz2, wieksza;
  wczytaj_int("Podaj pierwszą liczbe: ", &licz1);
  wczytaj_int("Podaj drugą liczbe: ", &licz2);
  
  if (licz1 > licz2)
    wieksza = licz1;
  else
    wieksza = licz2;

  printf("wieksza liczba to %d\n", wieksza);
  return 0;
}
