#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	pid_t parent_pid;
	pid_t child_pid;

	printf("Before calling print\n");
	parent_pid = getpid();
	printf("PID that started this process: %u\n", parent_pid);

	if (fork() == 0)
	{
		child_pid = getpid();
		printf("First call of child: %u\n", child_pid);
		printf("Parent ID: %u\n", getppid());
	}
	sleep(30);
	printf("This is after sleep: %u\n", getpid());
	printf("This is parent ID after sleep: %u\n", getppid());

	exit(EXIT_SUCCESS);
}
