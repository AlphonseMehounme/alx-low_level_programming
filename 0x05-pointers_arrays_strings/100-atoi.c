#include <stdio.h>

/**
 * _atoi - convert a string to an integer.
 * @s: char array string
 * Return: first integer found in string
 */

int _atoi(char *s)
{
	int i;
	int j, k;

	j = 0;
	k = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			k *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (j < 0)
				j = (j * 10) - (s[i] - '0');
			else
				j = (s[i] - '0') * -1;

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (k < 0)
		j *= -1;

	return (j);
}
