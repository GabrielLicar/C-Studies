#include <stdio.h>
#include <locale.h>

float maior(float num1, float num2);

int main() {
  setlocale(LC_ALL, "Portuguese");
  float x, y, m;

  printf("Insira um valor: ");
  scanf("%f", &x);
  printf("Insira outro valor: ");
  scanf("%f", &y);

  m = maior(x, y);

  printf("O maior numero entre (%.2f) e (%.2f): %.2f", x, y, m);
}

float maior(float num1, float num2) {
  if (num1 > num2) 
    return num1;
  else 
    return num2;
}