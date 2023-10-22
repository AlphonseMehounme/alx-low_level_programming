#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	char *args[] = {"./env", NULL};
	char *en[] = {NULL};
	void extern char **environ;

	printf("Before Exec...\n");
	if (execve(args[0], args, en) == -1)
	{
		perror("Errorr");
	}
	printf("After execve.\n");
	return (0);
}
