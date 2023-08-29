#include "main.h"

/**
 * puts_half - Print half of a string
 * @str: String to print
 */
void puts_half(char *str)
{
	int i, j, len, n;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
		for (j = n; j < len; j++)
		{
			_putchar(str[j]);
		}
	} else
	{
		n = (len - 1) / 2;
		for (j = n + 1; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
