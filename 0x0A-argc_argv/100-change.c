#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print minimum number of coin to make change
 * @argc: Number of args
 * @argv: Pointer to args
 *
 * Return: 0 if successful
 * 1 if number of argument different of 1
 */
int main(int argc, char *argv[])
{
	int a[] = {25, 10, 5, 2, 1};
	int i, cents;
	int number = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents > 0)
	{
		for (i = 0; i < 5; i++)
		{
			number += cents / a[i];
			cents %= a[i];
		}
	}
	printf("%d\n", number);
	return (0);
}
