#include "main.h"

/**
 * get_endianness - Check endianness
 *
 * Return: 1 if Little Endian
 * 0 if Big Endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c;

	c = (char *)&n;
	if (*c)
	{
		return (1);
	}
	return (0);
}
