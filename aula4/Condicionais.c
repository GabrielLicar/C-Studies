#include <stdio.h>

int main() {
  float m;

  printf("Digite uma nota:\n");
  scanf("%f", &m);

  if (m >= 7.0) {
    printf("Aprovado(a)!\n");
  } else if (m >= 4 && m < 7.0) {
    printf("Tem direito a exame!\n");
  } else {
    printf("Reprovado(a)!\n");
  }
  
  return 0;
}