#include <stdio.h>

/**
 * main - Entry to program
 *
 * Return: Always return (0)
 *
 * Description: A program that converts celsius to fahrenheit using a for loop
 */

int main(void)
{
	/** Declare variables */
	float celsius, fahr;

	printf("%s %s\n", "Celsius", "Fahrenheit");

	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
	{
		celsius = (5.0 / 9.0) * (fahr - 32);
		printf("%3.0f %10.2f\n", celsius, fahr);
	}

	return (0);
}
