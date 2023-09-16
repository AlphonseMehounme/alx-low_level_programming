#include "main.h"

/**
 * _strcpy - Copy str to dest
 * @src: String to copy
 * @dest: Place to copy too
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
