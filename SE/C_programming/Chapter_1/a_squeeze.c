#include <stdio.h>

/**
 * a_squeeze - A function that deletes a character from an array
 *
 * @c: A character that is to be deleted from the array
 *
 * Return: Nothing
 */

void a_squeeze(char s[], int c)
{
	/** Declaration of variables */
	int i, j;

	/** Initialization f variables */
	i = j = 0;

	while (s[i] != '\0')
	{
		if (s[i] != c)
			s[j++] = s[i];
		i++;
	}

	s[j] = '\0';
}
