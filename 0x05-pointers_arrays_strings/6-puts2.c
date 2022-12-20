#include <stdio.h>

/**
 * puts2 - print every other character of a string starting with the first char
 * @str: char array string type
 * Description: Print 1st char, leave 2nd char, print 3rd char, and so on
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
