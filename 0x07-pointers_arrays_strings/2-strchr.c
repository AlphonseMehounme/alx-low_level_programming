#include <stdio.h>

/**
 * _strchr - Afunction that locates a character in a string
 * @s: string input to search in
 * @c: string input to locate into string s
 * Return: a pointer to the first occurrence of c
 */

char *_strchr(char *s, char c)
{
	
	
	while (*s)
	{

		if (c == *s)
			return (s);

		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
