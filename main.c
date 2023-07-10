/* This program retrieves two numbers from the terminal and determines if the first is evenly divisible by the second. */

#include <stdio.h>
#include <stdbool.h>

int main(void) {

  // Get numbers from terminal
  int num1, num2;
  printf ("Enter numbers to evaluate: ");
  scanf ("%d %d", &num1, &num2);

  // Determine if num1 is divisible by num2
  bool isDivisible;
  if ( num1 % num2 == 0 ) {
    isDivisible = true;
  }
  else {
    isDivisible = false;
  }

  // Print result to the screen
  if (isDivisible) {
    printf ("%d is evenly divisible by %d\n", num1, num2);
  }
  else if (!isDivisible) {
    printf ("%d is not evenly divisible by %d\n", num1, num2);
  }
  
  return 0;
}