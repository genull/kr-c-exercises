#include <stdio.h>

/* count characters in input; 2nd version */

int main() {
  //long nc;
  double nc;
  for (nc = 0; getchar() != EOF; nc++)
    ;
  printf("%.0f\n", nc);
  /* nc = 0; */
  /* while (getchar() != EOF) */
  /*   nc++; */
  /* printf("%ld\n", nc); */
}
