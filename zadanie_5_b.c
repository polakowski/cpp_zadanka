#include <stdio.h>
#include <math.h>

int main() {
  printf("Program obliczy równianie kwadratowe\n");
  printf("Współczynniki a, b, c definiuje użytkownik.\n");

  float a, b, c;

  printf("Podaj a: ");
  scanf("%f", &a);

  printf("Podaj b: ");
  scanf("%f", &b);

  printf("Podaj c: ");
  scanf("%f", &c);

  float delta = pow(b, 2) - (4 * a * c);

  if (delta > 0) {
    float p1 = (-b - sqrt(delta)) / (a * 2.0);
    float p2 = (-b + sqrt(delta)) / (a * 2.0);

    printf("Pierwiastki równiania to: %f i %f\n", p1, p2);
  } else if (delta == 0.0) {
    float p = -b / (a * 2/0);

    printf("Pierwiastek podwójny równania to: %f\n", p);
  } else {
    printf("Ujemna delta, brak pierwiastków rzeczywistych.\n");
  }

  return 0;
}
