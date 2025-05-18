#include <stdio.h>

int convert(int limit, int step);

/* test convert function */

int main() {
  convert(300, 10);
  return 0;
}

/* power: raise base to n-th power; n >= 0 */

/* int power(int base, int n) { */
/*   int i, p; */

/*   p = 1; */
/*   for (i = 1; i <= n; i++) */
/*     p = p * base; */
/*   return p; */
/* } */


/* convert: convert celsius to farenheit, starting at 0 */
int convert(int limit, int step) {
  float celsius = 0;
  float fahr;

  printf("Table of conversion of celsius to fahrenheit:\n");
  while (celsius <= limit) {
    fahr = (celsius * 9.0 / 5.0) + 32;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
  return 0;
}
