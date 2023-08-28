#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String to print
 */
void print_rev(char *s)
{
	int i, j, leng;

	leng = 0;
	for (j = 0; s[j] != '\0'; j++)
	{
		leng++;
	}
	leng = leng - 1;
	for (i = leng; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
