#include <stdio.h>

/** Prototype declaration */
int a_isdigit(int c);

/**
 * a_htoi - Converts an array of hexadecimal characters to an integer
 *
 * s[]: An character array of hexadecimal digits
 *
 * Return: An integer equivalent of the hexadecimal value
 */

int a_htoi(const char s[])
{
	/** Declare variables */
	int i, digit, result;

	/** Initialize variables */
	i = 0;
	result = 0;

	/** Check if the string array not null and is a hexadecimal */
	if (s[i] != '0' && (s[i + 1] == 'x') || (s[i + 1] == 'X'))
		i += 2;

	/** Checking if it is a decimal */
	while (s[i] != '\0')
	{
		if (a_isdigit(s[i]))
			digit = s[i] - '0';

		else if (s[i] >= 'a' && s[i] <= 'f')
			digit = s[i] - 'a' + 10;

		else if (s[i] >= 'A' && s[i] <= 'F')
			digit = s[i] - 'A' + 10;
		else
			break;

	result = result * 16 + digit;

	i++;
	}

	return (result);
}
