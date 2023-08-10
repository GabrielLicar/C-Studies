#include <stdio.h>

int main() {
  char* anime;
  char* nome;
  int idade;

  printf("Informe o seu nome: ");
  scanf("%s", &nome);
  printf("Informe seu anime preferido: ");
  scanf("%s", &anime);
  printf("Informe sua idade: ");
  scanf("%d", &idade);

  printf("Aguarde...\n");

  if (idade <= 18) {
    printf("Tem certeza que tem idade suficiente para assistir esse anime? \n");
  } else {
    printf("%s e um otimo anime %s", anime, nome);
  }
}