#include <stdio.h>

void printOne(int v[], int length);
void printTwo(int v[5]);
void printThree(int *v, int length);

int main() {
  int arr[5] = {1,2,3,4,5};

  puts("First print:\n");
  printOne(arr, 5);

  puts("\n\nSecond print:\n");
  printTwo(arr);
  
  puts("\n\nThird print\n");
  printThree(arr, 5);
}

void printOne(int v[], int length) {
  for (int i = 0; i < length; i++) {
    printf("[%d],", v[i]);
  }
}

void printTwo(int v[5]) {
  for (int i = 0; i < 5; i++) {
    printf("[%d],", v[i]);
  }
}

void printThree(int *v, int length) {
  for (int i = 0; i < length; i++) {
    printf("[%d],", v[i]);
  }
}