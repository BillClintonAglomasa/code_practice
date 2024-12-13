#include <stdio.h>

/**
 * main - Entry of program
 *
 * Return: Always return (0)
 *
 * Description: A program that converts celsius to fahrenhiet and employing
 *              symbolic constants
 */

#define UPPER 300
#define STEP  20
#define LOWER 0

int main(void)
{
	/** Defining variables*/
	float celsius, fahr;

	/** Printing header */
	printf("%s %s\n", "Celsius", "Fahrenheit");

	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
	{
		celsius = (5.0 / 9.0) * (fahr - 32);
		printf("%3.0f %12.2f\n", celsius, fahr);
	}

	return (0);
}
