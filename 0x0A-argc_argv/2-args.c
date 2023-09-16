#include <stdio.h>

/**
 * main - Prints its arguments
 * @argc: Number of arguments
 * @argv: Pointer to arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
