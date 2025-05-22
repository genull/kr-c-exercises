#include <stdio.h>
#define MAXSIZE 1000

void reverse(char line[]);
int readline(char line[], int length);

int main() {
  char line[MAXSIZE];
  
  while (readline(line, MAXSIZE) > 0) {
    reverse(line);
    printf("%s", line);
  }


}

// reverse the strings passed to it
void reverse(char s[]) {
  int i, j;
  i = 0;

  for (j = 0; s[j] != '\0'; j++)
    ;

  --j;

  while (i < j) {               /* to illustrate: suppose string hello\n\0 */
    char temp = s[i];           /* temp = 'h' */
    s[i] = s[j];                /* s = "oello" */
    s[j] = temp;                /* s = "oellh" */
    i++;
    j--;
  }
  
}

//read a line from stdin
int readline(char s[], int lim) {
  int c, i;

  for (i=0; i < lim && ((c = getchar()) != EOF); ++i) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i++] = c;
  }

  s[i] = '\0';
  return i;
}
