#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: Returns a pointer to the memory area filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *tos = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (tos);
}
