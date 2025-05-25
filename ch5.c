#include <stdio.h>
#include <stdlib.h>

int main() {

  long long int num;
  printf("Enter num:");
  scanf("%lld", &num);

  int counter = 0;
  long long int amnt = num;
  while (1) {
    if (amnt == 0) {
      break;
    }
    amnt = amnt / 10;
    counter++;
  }

  printf("Total: %d\n", counter);
  return 0;
}
