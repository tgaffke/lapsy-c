#include <stdio.h>
#include <math.h>

void oblicz_pierwiastki(double a, double b, double c, double *x1, double *x2);

int main() {
  double a, b, c, x1, x2;   
  
  scanf("%lf %lf %lf", &a, &b, &c);  
  oblicz_pierwiastki(a, b, c, &x1, &x2);  
  printf("x1 = %lf, x2 = %lf\n", x1, x2);

  return 0;
}

void oblicz_pierwiastki(double a, double b, double c, double *x1, double *x2) {
  double delta;
  delta = b*b - 4*a*c;
  *x1 = (-b + sqrt(delta))/2;
  *x2 = (-b + sqrt(delta))/2;
}

