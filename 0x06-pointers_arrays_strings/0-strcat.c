#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: String type input
 * @src: String type input
 * Return: Pointer to the result
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
