#include "main.h"

/**
 * more_numbers - Print number from 0 to 14 10 times
 */
void more_numbers(void)
{
	int i, j, k, l;

	for (l = 0; l < 10; l++)
	{
		for (i = 0; i <= 14; i++)
		{
			j = i / 10;
			k = i % 10;
			if (j > 0)
			{
				_putchar('0' + j);
			}
			_putchar('0' + k);
		}
		_putchar('\n');
	}
}
