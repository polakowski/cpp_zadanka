#include <stdio.h>

int main() {
  printf("Program wypisze sumę dwóch liczb całkowitych podanych przez użytkownika\n");

  int a, b;

  printf("Podaj pierwszą liczbę: ");
  scanf("%d", &a);

  printf("Podaj drugą liczbę: ");
  scanf("%d", &b);

  int sum = a + b;

  printf("Suma to: %d\n", sum);

  return 0;
}
