#include <stdio.h>

void printM(int m[][4], int length) {
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int mat[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

  printM(mat, 3);
}