#include <stdio.h>

int main() {
  printf("Program wypisze sumę dwóch liczb rzeczywistych podanych przez użytkownika\n");

  float a, b;

  printf("Podaj pierwszą liczbę: ");
  scanf("%f", &a);

  printf("Podaj drugą liczbę: ");
  scanf("%f", &b);

  float sum = a + b;

  printf("Suma to: %f\n", sum);

  return 0;
}
