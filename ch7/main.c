#include <ctype.h>
#include <stdio.h>

int main() {
  int z;   // 32 - 2^32 | 64 2^64
  short x; // 32 bit - (2^16 - 1),
  long y;
  unsigned int w;
  /* printf("%u", w); */
  /* printf("%hd", x); */
  /* long double zed; */
  /**/
  /* char ch; */
  /* ch = 'a'; */
  /* for (ch = 'A'; ch <= 'Z'; ch++) { */
  /*   printf("%d is %c\n", ch, ch); */
  /* } */
  printf("%c\n", toupper('a'));
  putchar('a');
  printf("\n");
  char l;
  int counter = 0;
  do {
    l = getchar();
    counter++;
  } while (l != '\n');
  printf("%d", counter);

  return 0;
}
