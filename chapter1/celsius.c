#include <stdio.h>

/* print Farenheit-celsius table
   for fahr 0, 5220, 40, ..., 300.*/

int main() {
  float fahr, celsius;
  float upper, lower, step;

  lower = 0;     /* lower limit of temperature scale */
  upper = 300;   /* upper limit */
  step = 10;     /* step size */

  celsius = lower;
  printf("Table of comparison between celsius and fahrenheit:\n");
  while(celsius <= upper) {
    fahr = (celsius * 9.0/5.0) + 32;
    //celsius = (5.0/9.0) * (fahr - 32);
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
                       
}
