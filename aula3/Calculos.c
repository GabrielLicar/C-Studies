#include <stdio.h>

int main() {
  int A, B, soma, sub, div, mult;

  printf("Digite o primeiro valor: ");
  scanf("%d", &A);
  printf("Digite o segundo valor: ");
  scanf("%d", &B);

  soma = A + B;
  sub = A - B;
  mult = A * B;
  div = A / B;

  printf("RESULTADOS: \n");
  printf("SOMA: %d\n", soma);
  printf("SUBTRACAO: %d\n", sub);
  printf("MULTIPLICACAO: %d\n", mult);
  printf("DIVISAO: %d\n", div);
}