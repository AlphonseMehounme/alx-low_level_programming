#include <stdio.h>

/**
 * puts_half - print half of a string
 * @str: char array string type
 * Description: Print (length -1) / 2 when odd number of chars
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
