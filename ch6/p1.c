#include <stdio.h>

int main() {

  float num;
  float max;

  do {
    printf("Enter number: ");
    scanf("%f", &num);
    if (num > max) {
      max = num;
    }
  } while (num > 0);

  printf("Max: %f", max);
  return 0;
}
