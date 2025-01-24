/**
 * reverse - A function that reverses characters on a line
 *
 * @s: An array containing characters to be reversed
 * @len: An integer of the length of the array without null terminator
 *
 * Return: Nothing
 *
 * Description: This function takes an array containing characters on a line and
 *              the length of the array to reverse the array by swapping
 *              at both ends until they meet at the center
 */

void reverse(char s[], int len)
{
	/** Declaration of variables */
	int i, j;
	char temp;

	/** Initialization of variables */
	j = len - 1;

	for (i = 0; i < j; ++i; --j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
