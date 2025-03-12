#include <stdio.h>

/**
 * a_isdigit - Tests whether a value is a digit
 *
 * @c: An integer to be tested
 *
 * Return: Returns 0 if not an integer and 1 if it is an integer
 */

int a_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
