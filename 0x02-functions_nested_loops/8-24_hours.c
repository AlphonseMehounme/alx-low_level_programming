#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 48; i <= 50; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 53; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if (i == 50 && j >= 52)
					{
						break;
					}
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					if (!(i == 50 && j == 51 && k == 53 && l == 57))
					{
						_putchar('\n');
					}
				}
			}
		}
	}
	_putchar('\n');
}
