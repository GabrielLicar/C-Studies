#include <stdio.h>

void printImc(double imc) {
  printf("\nCLASSIFICAÇÃO\n");

  if (imc < 18.5) {
    printf("MAGREZA\n");
    printf("OBESIDADE (GRAU)\n");
    printf("0\n");
  }
  else if (imc >= 18.5 && imc < 24.9) {
    printf("NORMAL\n");
    printf("OBESIDADE (GRAU)\n");
    printf("0\n");
  }
  else if (imc >= 25 && imc < 29.9) {
    printf("SOBREPESO\n");
    printf("OBESIDADE (GRAU)\n");
    printf("I\n");
  }
  else if (imc >= 30 && imc < 39.9) {
    printf("SOBREPESO\n");
    printf("OBESIDADE (GRAU)\n");
    printf("II\n");
  }
  else {
    printf("SOBREPESO\n");
    printf("OBESIDADE (GRAU)\n");
    printf("III\n");
  }

  printf("SEU IMC: %.2lf", imc);
}

int main() {
  double altura = 0.0;
  double peso = 0.0;

  printf("CALCULANDO IMC\n");

  printf("Digite sua altura: \n");
  scanf("%lf", &altura);

  printf("Digite o seu peso: \n");
  scanf("%lf", &peso);

  if (altura == 0) {
    printf("Altura não pode ser 0\n");
    return 1;
  }

  double imc = peso / (altura * altura);
  printImc(imc);
  return 0;
}