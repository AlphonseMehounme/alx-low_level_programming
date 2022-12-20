#include <stdio.h>

/**
 * _puts - print a string to stdout
 * @str: char array sting type
 * Description: Only can use use putchar
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
