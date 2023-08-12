#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define LEN 3

struct Person {
  char name[50];
  int age;
  float weight;
};

typedef struct Person Person;

int main() {
  setlocale(LC_ALL, "Portuguese");

  Person list[LEN];

  for (int i = 0; i < LEN; i++) {
    printf("Insira os dados (%d)\n", i+1);
    puts("Nome: ");
    scanf("%50[^\n]s", &list[i].name);
    fflush(stdin);

    puts("Idade: ");
    scanf("%d", &list[i].age);
    fflush(stdin);

    puts("Peso: ");
    scanf("%f", &list[i].weight);
    fflush(stdin);
  }
  system("cls");

  for (int i = 0; i < LEN; i++) {
    printf("---------------- Pessoa (%d) ----------------\n", i+1);
    printf("\tNome: %s\n", list[i].name);
    printf("\tIdade: %d\n", list[i].age);
    printf("\tPeso: %.2f\n", list[i].weight);
  }
  puts("----------------------------------------------");
}