#include <stdio.h>
#include <string.h>
#include <locale.h>

#define LEN 50

struct type_person {
  int age;
  float weight;
  char name[LEN];
};

typedef struct type_person tperson;

int main() {
  setlocale(LC_ALL, "Portuguese");

  tperson person = { 0, 0.0, "Teste" }; 
  printf("Inicio\n");
  printf("Name: %s\n", person.name);
  printf("Idade: %d\n", person.age);
  printf("Peso: %.2f\n", person.weight);

  // Atribuindo valores aos campos

  strcpy(person.name, "Gab");
  person.age = 17;
  person.weight = 1.0;

  // Imprimindo novos valores
  printf("\nImprindo os novos valores:\n");
  printf("Name: %s\n", person.name);
  printf("Idade: %d\n", person.age);
  printf("Peso: %.2f\n", person.weight);

  // Pegando os novos valores;
  printf("\nInsira o seu primeiro nome: ");
  fgets(person.name, LEN, stdin);
  fflush(stdin);
  printf("Insira a sua idade: ");
  scanf("%d", &person.age);
  fflush(stdin);
  printf("Insira o seu peso: ");
  scanf("%f", &person.weight);

  printf("\nAlterando com dados fornecidos:\n");
  printf("Nome: %s", person.name);
  printf("Idade: %d\n", person.age);
  printf("Peso: %.2f\b", person.weight);
}