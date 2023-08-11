#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main() {
  setlocale(LC_ALL, "Portuguese");

  char s[N];
  int sLength;

  printf("Digite um texto:\n");
  fgets(s, N, stdin);
  fflush(stdin);
  sLength = strlen(s);

  printf("\nTamanho do texto: %d\n\n", sLength);

  printf("Impressão de posição a posição:\n");

  for (int i = 0; i < sLength; i++) {
    printf("%c ", s[i]);
  }
}