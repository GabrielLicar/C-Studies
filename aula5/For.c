#include <stdio.h>

int main() {
  
  for (int i = 1; i <= 10; i++) {

      if (i == 5) {
        continue;
      }else if (i == 6) {
        break;
      }

    printf("%d ", i);
  }

  return 0;
}