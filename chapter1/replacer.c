#include <stdio.h>

/* substitute tabs, backspace and backslashes by their symbols */
/* backspace doesn't show due to intricacies of how terminals work nowadays,
   implementing it would require knowledge that is out of the scope of the
   1st chapter.*/


int main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      putchar('\\');
      putchar('t');
    }
    else if (c == '\b') {
      putchar('\\');
      putchar('b');
    }
    else if (c == '\\') {
      putchar('\\');
      putchar('\\');
    }
    else
      putchar (c);
  
  }
}
