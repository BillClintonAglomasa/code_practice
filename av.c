#include <stdio.h>

/**
 * main - Prints the arguments passed from command line
 *
 * @ac: The number of argument counts
 * @av: A pointer to an array containing strings passed to the command line
 *
 * Return: Always return 0.
 */

int main(int ac, char **av)
{
	int i = 0;

	while (av[i])
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
