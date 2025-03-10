#include <stdio.h>

/** Prototype definition */
int a_lower(int c);

/**
  * main - Entry to program
  *
  * Return: Always 0
  */

int main(void)
{
	/** Declaration of variables */
	int c;
	int d;

	/** Initialize variables */
	c = 'A';


	d = a_lower(c);

	printf("\nValue of c is %c\n", d);
}
