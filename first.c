#include <stdbool.h>
#include <stdio.h>

void bruh() { printf("hey"); }

int main() {

  // float x_f;
  // int x;
  // scanf("%f", &x_f);
  // printf("%.2f", x_f);

  bool flag;
  flag = true;
  int x = 3;
  if (x != 2) {
    printf("1\n");
    if (0) {
      printf("2\n");
    }
  } else {
    printf("3\n");
  }

  x == 3 ? printf("yes 3 equals 3\n") : printf("no x does not equal 3");

  int i = 10;

  printf("%d\n", !(i > x));
}
