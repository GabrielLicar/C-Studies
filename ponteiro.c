#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  
  int * ptr;
  int valor = 10;

  ptr = &valor;

  printf("Endereço = %x\n", &valor);
  printf("Endereço = %x\n", ptr);
  printf("Valor = %d\n", *ptr);

  system("pause");
  return 0;
}