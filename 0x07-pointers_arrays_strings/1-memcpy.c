#include <stdio.h>

/**
 * _memcpy - afunction that copys memory area
 * @dest: memory area destination to copy
 * @src: memory area source to copy from
 * @n: nu,ber of bytes
 * Return: returns pointer to copy location
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *todest = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (todest);
}
