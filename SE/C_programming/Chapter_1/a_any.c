#include <stdio.h>

/**
 * a_any - A function which returns the first location in a string when it
 *         matches another character or -1 if no characters match in another
 *         string.
 *
 * @s1: An array of characters
 * @s2: An array of characters
 *
 * Return: The location of a string in s1 if it matches a character in s2 or
 *         -1 if there are no matches.
 */

int a_any(char s1[], char s2[])
{
	/** Declaration of variables */
	int i, j, found;

	/** Looping through the arrays */
	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] == s2[j])
			{
				return (i);
			}
		}
	}

	return (-1);
}
