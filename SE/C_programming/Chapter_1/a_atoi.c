#include <stdio.h>

/**
 * a_atoi - Converts a string of digits into integers
 *
 * @s: An array of characters
 *
 * Return: An integer representing the ASCII equivalent
 */

int a_atoi(char s[])
{
	/** Declaration of variabls */
	int i, n;

	/** Initialize variables */
	n = 0;

	i = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		++i;
		n = 10 * n + (s[i] - '0');
	}

	return (n);
}
