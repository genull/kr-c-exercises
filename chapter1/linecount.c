#include <stdio.h>

/* count lines, tabs and blanks in input */

int main() {
  int c, nl, blank, tabs;

  nl = 0;
  blank = 0;
  tabs = 0;
  
  while ((c = getchar()) != EOF)
    if (c == '\n')
      nl++;
    else if (c == '\t')
      tabs++;
    else if (c == ' ')
      blank++;
  printf("\nThere is %d new lines\n%d blank spaces\n%d tabs", nl, blank, tabs);
}
