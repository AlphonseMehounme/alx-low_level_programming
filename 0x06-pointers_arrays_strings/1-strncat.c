#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Destination string pointer
 * @src: Source string pointer
 * @n: Number of byte to copy
 *
 * Return: Dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *dest2;

	dest2 = dest;
	for (i = 0; dest[i] != '\0'; i++)
	{
		dest2[i] = dest[i];
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest2[i] = src[j];
		i++;
	}
	dest2[i] = '\0';
	return (dest2);
}
