#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	char *dest2;

	dest2 = dest;
	for (i = 0; dest[i] != '\0'; i++)
	{
		dest2[i] = dest[i];
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest2[i] = src[j];
		i++;
	}
	dest2[i] = '\0';
	return (dest2);
}
