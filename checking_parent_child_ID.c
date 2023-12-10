#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	pid_t ppid;
	pid_t pid;

	ppid = fork();

	printf("%u", ppid);

	exit(EXIT_SUCCESS);
}
