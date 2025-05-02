#include <stdio.h>

#define IN 1    /* inside a word */
#define OUT 0   /* outside a word */

/* count lines, characters and words in input */

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t')
      putchar('\n');
    else
      putchar(c);
  }
}
