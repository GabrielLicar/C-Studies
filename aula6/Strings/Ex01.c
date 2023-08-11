#include <stdio.h>

int main() {
  char s[10];

  printf("Digite algo (scanf convencional)\n");
  scanf("%s", s);
  fflush(stdin);

  printf("Resultado: %s\n", s);

  printf("\nDigite algo (scanf aprimorado)\n");
  scanf("%9[^\n]s", s);
  return 0;
}