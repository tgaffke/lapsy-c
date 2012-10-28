#include <stdio.h>

int a;

void hej(void);
void wczytaj_liczbe(void);

int main() {
  hej();
  wczytaj_liczbe();
  
  return 0;
}

void hej(void) {
  printf("hello world\n");
}

void wczytaj_liczbe(void) {
  int a;
  printf("podaj liczbe całkowitą: ");
  scanf("%d", &a);
  printf("podałeś liczbe całkowitą: %d\n", a);
}


