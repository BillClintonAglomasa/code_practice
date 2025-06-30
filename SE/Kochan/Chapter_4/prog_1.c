#include <stdio.h>

/**
 * main - Entry to program
 * return: Always 0
 */

int main(void)
{
	int integerVar = 100;
	float floatingVar = 331.79;
	double doubleVar = 8.44e+11;
	char charVar = 'W';

	_Bool boolvar = 0;


	printf("integerVar = %i\n", integerVar);
	printf("floatingVar = %f\n", floatingVar);
	printf("doubleVar = %e\n", doubleVar);
	printf("doubleVar = %g\n", doubleVar);
	printf("integerVar = %c\n", charVar);


	return (0);
}
