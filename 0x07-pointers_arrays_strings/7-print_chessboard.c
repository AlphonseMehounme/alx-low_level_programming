#include <stdio.h>

/**
 * print_chessboard - a function that print a chessboard
 * @a: an array input to print
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	int y, x;

	y = 0;
	while (y < 8)
	{
		x = 0;
		while (x < 8)
		{
			_putchar(a[y][x]);
			x++;
		}
		_putchar('\n');
		y++;
	}
}
