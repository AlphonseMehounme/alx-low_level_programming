#include "main.h"
#include <string.h>

unsigned int power(int, int);

/**
 * binary_to_uint - Convert binary to unsigned int
 * @b: Pointer to char
 *
 * Return: Unsigned int of the binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int n = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		n += (b[i] - '0') * power(2, (strlen(b) - 1 - i));
	}
	return (n);
}

/**
 * power - Calculate a power b
 * @a: First number
 * @b: Power
 *
 * Return: a power b
 */
unsigned int power(int a, int b)
{
	unsigned int n = 1;
	int i;

	for (i = 0; i < b; i++)
	{
		n *= a;
	}
	return (n);
}
