#include <stdio.h>

/**
 * main - Print environment variables
 *
 * Return 0
 */
int main(void)
{
	extern char **environ;
	int i = 0;

	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
	return (0);
}
