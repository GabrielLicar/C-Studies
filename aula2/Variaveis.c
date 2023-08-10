#include <stdio.h>

#define text "ENTRADA E SAIDA DE DADOS:"

int main() {
  printf("%s\n", text);

  int idade = 0;
  float altura = 0.0;
  char nome[50] = "";

  printf("Digite seu nome: ");
  scanf("%s", &nome);
  printf("Digite sua idade: ");
  scanf("%d", &idade);
  printf("Digite sua altura: ");
  scanf("%f", &altura);

  printf("\n");
  printf("-=-=-=-=-==--=-=-=-=-==- \n");
  printf("DADOS INFORMADOS: \n");
  printf("\n");

  printf("NOME: %s \n", nome);
  printf("IDADE: %d\n", idade);
  printf("ALTURA: %.2f\n", altura);
}