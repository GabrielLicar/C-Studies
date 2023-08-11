#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main() {
  setlocale(LC_ALL, "Portuguese");

  char hardText[N] = {"password"};
  char passUsr[N];
  int isOk;
  int length;

  printf("Digite um texto: ");
  gets(passUsr);
  fflush(stdin);
  
  isOk = strcmp(hardText, passUsr);

  if (isOk == 0) {
    puts("Textos iguais");
  }else {
    puts("Textos diferentes");
  }
}