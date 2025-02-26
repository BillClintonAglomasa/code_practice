#include <stdio.h>

/**
 * lower - Converts uppercase to lowercase
 *
 * @c: An upper case character to be converted to lowercase
 *
 * Return: An uppercase character
 */

int lower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';

	else
		return c;
}
