#include "main.h"

/**
 * flip_bits - Return the n of bit to flip to get m
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bit to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int p;
	unsigned int count = 0;

	p = n ^ m;
	while (p > 0)
	{
		if (p & 1)
		{
			count++;
		}
		p = p >> 1;
	}
	return (count);
}
