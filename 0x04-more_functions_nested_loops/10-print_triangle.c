#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: Size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < (size - 1 - i); k++)
			{
				_putchar(32);
			}
			for (j = (size - 1 - i); j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');	
		}
	}
}
