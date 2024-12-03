#include <stdio.h>

/**
 *Copy character and print it to screen */

int main(void){

  /**
   *Declare variables
   */
  int c;

  while ((c = getchar()) != EOF)
    putchar(c);

  return (0);
}
