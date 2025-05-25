#include <stdio.h>

int main() {
  int num = 0;

  printf("Enter a positive number: ");
  scanf("%d", &num);

  if (num < 0) {
    goto negative; // jump to the label if number is negative
  }

  printf("You entered: %d\n", num);
  int x;
  for (x = 0; x < 10; x++)
    ;
  printf("%d\n", x);
  return 0;

negative:
  printf("Error: You entered a negative number!\n");
  return 1;
}
