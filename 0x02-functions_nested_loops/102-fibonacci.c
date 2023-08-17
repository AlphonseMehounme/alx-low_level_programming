#include <stdio.h>

/**
 * main - Print the first 50 Fibonacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j, k, l;
	j = 1;
	k = 2;
	for (i = 1; i <= 50; i++)
	{
		printf("%d, ", j);
		l = j + k;
		j = k;
		k = l;
	}
	printf("\n");
	return (0);

}
