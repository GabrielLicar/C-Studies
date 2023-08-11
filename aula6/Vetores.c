#include <stdio.h>

int main() {
  // NORMAL
  /*
  int v[5] = {10, 20, 30, 40, 50};
  float m = 0;

  for (int i = 0; i < 5; i++) {
    m += v[i] / 5;
  }

  
  printf("Resultado: %.f\n", m);
  */

  int v[5];
  int i;

  for (i = 0; i < 5; i++) {
    printf("Insira um dado: ");
    scanf("%d", &v[i]);
  }

  printf("Dados inseridos: ");
  for (i = 0; i < 5; i++) {
    printf("%d ", v[i]);
  }
}