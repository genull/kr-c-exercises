#include <stdio.h>
#define MAXLINE 1000
/* I'm gonna try to make every step of this exercise into a function */
/* It's gonna be like an UNIX way of doing it */

int readline(char line[], int length);
int iterate_on_line(char line[]);
int line_is_blank(char line[]);




int main() {
  char line[MAXLINE];

  while (readline(line, MAXLINE) > 0) {
    iterate_on_line(line);

    if (line_is_blank(line) != 1) {
      printf("%s\n", line);
    }
  }

  return 0;
}


//return 1 if line is empty
int line_is_blank(char s[]) {
  if (s[0] == '\0') {
    return 1;
  } else {
    return 0;
  }
}

/* finds the null character (0 on ascii) and change position to new end of string */
int iterate_on_line(char s[]) {
  int i;

  //find end of string
  for (i = 0; s[i] != '\0'; ++i)
    ;

  --i; // go back to non null char


  //iterate backwards on the string if the chars are whitespace
  while (i >= 0 && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
    --i;

  // defines a new string end
  s[i + 1] = '\0';

  //return the new length of the string
  return i + 1;
}


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
