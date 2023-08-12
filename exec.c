#include <stdio.h>

int main() {
  // EXERCICIO 1
  /*
    int A[6] = { 1, 0, 5, -2, -5, 7 };
    int s = A[0] + A[1] + A[5];

    printf("Resultado da soma: %d\n", s);

    A[4] = 100;

    printf("\nExibindo os valores em cada linha\n");
    for (int i = 0; i < 6; i++) {
      printf("%d\n", A[i]);
    }
  */
  // EXERCICIO 2
  /*
  int A[6];

  for (int i=0;i<6;i++) {
    printf("Digite um valor: ");
    scanf("%d", &A[i]);
  }
  for (int i=0;i<6;i++) {
    printf("%d ", A[i]);
  }
  */

  int value[2][2] = { {2, 14}, {16, 22} };
  int consultCol = 0, consultLine = 0;

  printf("Digite a coluna que deseja consultar:\n");
  scanf("%d", &consultCol);

  printf("Digite a linha que deseja consultar:\n");
  scanf("%d", &consultLine);

  if (consultLine > 2 || consultCol > 2){
    printf("A tabela contem apenas duas colunas e duas linhas.");
    return 1;
  }else printf("\nResultado da consulta: %d\n", value[consultCol][consultLine]);
}