#include <stdio.h>
#include <stdlib.h>

/**
 * main - Add positive numbers
 * @argc: Number of args
 * @argv: Pointer to args
 *
 * Return: 0 if successfull
 * 1 if a non digit in args
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
