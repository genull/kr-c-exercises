#include <stdio.h>

#define MAX_LENGTH  10

int main() {
  int c, i, counter;
  int lengths[MAX_LENGTH];

  counter = c = i = 0;

  //populate array with 0's
  for (i = 0; i < MAX_LENGTH; i++) {
  lengths[i] = 0;
  }




  //main loop: check for word separator and increase array element by one
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n'){
        if (counter > 0 && counter < MAX_LENGTH) {
          ++lengths[counter];
        }
        counter = 0;
    }
    else {
      ++counter;
    }
  }

  //to avoid not counting the last word
  if (counter > 0 && counter < MAX_LENGTH) {
    ++lengths[counter];
  }

  
  //loop that writes the asterisk according to the value of each element on the array
  for (i = 1; i < MAX_LENGTH; i++) {
    printf("%2d characters: ", i);
    for (int j = 0; j < lengths[i]; j++)
      putchar('*');
    putchar('\n');
  }  
}
