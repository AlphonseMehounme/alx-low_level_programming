#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal on the terminal
 * @n: Number of \ to be printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < n; i++)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
