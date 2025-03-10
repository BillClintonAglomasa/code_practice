#include <stdio.h>

/** a_lower - A function that takes an uppercase letter and converts it to lower
  *
  * @c: A character constant of the uppercase to be converted
  *
  * Return: Returns the lowercase equivalent of the uppercase constant
  */

int a_lower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}
