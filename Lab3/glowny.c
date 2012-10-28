#include <stdio.h>

void hej(void);
void wczytaj_liczbe(int *k);

int main() {
  int a;
  hej();
  wczytaj_liczbe(&a);
  printf("podales liczbe całkowitą: %d\n", a);
  return 0;
}

void hej(void) {
  printf("hello world\n");
}

void wczytaj_liczbe(int *k) {
  printf("podaj liczbe całkowitą: ");
  scanf("%d", k);
}


