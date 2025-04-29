#include <stdio.h>

/* print Farenheit-celsius table
   for fahr 0, 20, 40, ..., 300.*/

int main() {
  float fahr, celsius;
  float upper, lower, step;

  lower = 0;     /* lower limit of temperature scale */
  upper = 300;   /* upper limit */
  step = 20;     /* step size */

  fahr = lower;
  printf("Table of comparison between farenheit and celsius:\n");
  while(fahr <= upper) {
    celsius = (5.0/9.0) * (fahr - 32);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
                       
}
