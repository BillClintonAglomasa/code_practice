#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints PPID
 *
 * Return: Always 0
 */

int main(void)
{
	/* Declaring variable */
	pid_t ppid;

	ppid = getppid();

	printf("PPID is %u\n", ppid);

	return (0);
}
