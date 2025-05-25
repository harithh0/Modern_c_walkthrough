
#include <stdio.h>
#include <stdlib.h>

void calc(int num) {
  switch (num) {
  case 0:
    printf("zero");
    break;
  case 1:
    printf("one");
    break;
  case 2:
    printf("two");
    break;
  case 3:
    printf("three");
    break;
  case 4:
    printf("four");
    break;
  case 5:
    printf("five");
    break;
  case 6:
    printf("six");
    break;
  case 7:
    printf("seven");
    break;
  case 8:
    printf("eight");
    break;
  case 9:
    printf("nine");
    break;
  }
}

int main() {

  int num;
  printf("Enter 2 dig num:");
  scanf("%2d", &num);

  int f = num / 10;
  int l = num % 10;

  printf("%d is: ", num);
  calc(f);
  printf("-");
  calc(l);
  printf("\n");

  int i = 10;
  while (i > 0) {
    printf("T minus %d and counting\n", i);
    i--;
  }
  return 0;
}
