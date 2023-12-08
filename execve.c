#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	int returned_fork;
	char *argv[] = {"/bin/ls", "-l", "/home/vagrant/learnings/simple_shell", NULL};

	printf("Before fork");

	returned_fork = fork();

	if (returned_fork == -1)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}

	if (returned_fork == 0)
	{
		printf("Fork is succesful");
	}

	else
	{
		
	}
