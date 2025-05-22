#include <bits/posix2_lim.h>
#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

/* Detect that the current buffer filled up but the line hasn't ended. */

/* Keep counting characters even after the buffer fills. */

/* At the end, print the length, and as much of the line as fits. */

int mygetline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest line input */
int main() {
  int len;                      /* current line length */
  int max;                      /* maximum length seem so far */
  char line[MAXLINE];           /* current input line */
  char longest[MAXLINE];        /* longest line saved here */

  max = 0;
  
  while ((len = mygetline(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }
  if (max > 0) {              /* there was a line */
    printf("%s\n", longest);
    printf("%d\n", max - 1);
  }
  return 0;
}

/* getline:read a line into s, return length */
int mygetline(char s[], int lim) {
  int c, i;
  for (i=0; (c=getchar()) != EOF && c!='\n'; ++i) {
    if (i < lim - 1) {
      s[i] = c;      
    } 
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}
