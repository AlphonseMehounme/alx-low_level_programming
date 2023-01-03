#include <stdio.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: a tring string input
 * @accept: an input character with locate into string s
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *toaccept = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = toaccept;
		s++;
	}
	return (NULL);
}
