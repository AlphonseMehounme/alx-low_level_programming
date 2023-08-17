#include "main.h"

/**
 * times_table - Function that print the 9 times table
 */
void times_table(void)
{
	int i, j, multi, mod, divm, multin;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			multi = i * j;
			multin = i * (j + 1);
			if (multi < 10)
			{
				_putchar(48 + multi);
				if (multin < 10 && j != 9)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				} else if (multin >= 10 && j != 9)
				{
					_putchar(44);
					_putchar(32);
				}
			} else
			{
				mod = multi % 10;
				divm = multi / 10;
				_putchar(48 + divm);
				_putchar(48 + mod);
				if (multin >= 10 && j != 9)
				{
					_putchar(44);
					_putchar(32);
				}
			}
		}
		_putchar('\n');
	}
}
