#include "main.h"

/**
 * times_table - Function that print the 9 times table
 */
void times_table(void)
{
	int i, j, multi, mod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; i++)
		{
			printf(i*j);
		}
		_putchar('\n');
	}
}
