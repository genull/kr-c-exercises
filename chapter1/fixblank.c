#include <stdio.h>

/* remove extra spaces if there's more than one */

int main() {
  int c, pc;

  pc = 0;
  
  while ((c = getchar()) != EOF) {
    if (c != ' ' || pc != ' ') {
      putchar(c);
    }
    pc = c;
  }
}
