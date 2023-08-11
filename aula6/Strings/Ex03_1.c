#include <stdio.h>
#include <string.h>
#include <locale.h>

#include <stdlib.h>

#define N 20

int main() {
  setlocale(LC_ALL, "Portuguese");

  char origem[N] = {"Olá, mundo!"};
  char destino[N];

  puts("Antes do strcpy: \n");
  puts(origem);
  puts(destino);

  strcpy(destino, origem);

  puts("\nDepois do strcpy\n");
  puts(origem);
  puts(destino);

  system("pause");
}