#include <stdio.h>
/**
 * Copy from input to output
 */

int main(void){
  /** Declare varaibles */
  int c;

  /** Set variables */
  c = getchar();

  while (c != EOF){
    putchar(c);
    c = getchar();
  }

  return (0);
}
