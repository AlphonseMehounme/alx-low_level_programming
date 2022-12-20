#include <stdio.h> 

/**
 * print_rev - print a string in reverse followed by a new line
 * @s: char array string type
 */

void print_rev(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; i++)
		;

	for(j--; j >= 0; j--)
		putchar(s[j]);

	putchar('\n')
}
