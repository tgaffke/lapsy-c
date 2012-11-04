#include <stdio.h>
 int main()
{
  int licz1, licz2, wieksza;
  printf("Podaj pierwszą liczbe: ");
  scanf("%d", &licz1);
  printf("podaj drugą liczbe: ");
  scanf("%d", &licz2);
  if (licz1 > licz2)
    wieksza = licz1;
  else
    wieksza = licz2;

  printf("wieksza liczba to %d\n", wieksza);
  return 0;
}
