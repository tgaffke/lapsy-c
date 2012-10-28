#include <stdio.h>
#include <math.h>

void podaj_liczbe(char *prompt, double *x);

int main() {
  int a;
  podaj_liczbe("Podaj liczbę: ", &a);
  b = sqrt(a);
  printf("Pierwiastek z %f liczby to %f\n", a, b);
  return 0;
}

void podaj_liczbe(char *prompt, int *x) {
  puts(prompt);
  scanf("%f", x);
}


