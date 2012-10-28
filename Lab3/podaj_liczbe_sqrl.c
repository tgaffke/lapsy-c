#include <stdio.h>
#include <math.h>

void podaj_liczbe(char *prompt, double *x);

int main() {
  double a, b;
  podaj_liczbe("Podaj liczbę: ", &a);
  if(a >= 0) {
    b = sqrt(a);
    printf("Pierwiastek z %lf liczby to %17.141lf\n", a, b);
    } else {
    printf ("! Błąd\n");
    }
    return 0;
}

void podaj_liczbe(char *prompt, double *x) {
  puts(prompt);
  scanf("%lf", x);
}
