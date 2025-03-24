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

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			found = 0;

			if (s[i] == s[j])
			{
				found = 1;
				return (i);
			}
		}

		if (!found)
			return (-1);
	}
}
