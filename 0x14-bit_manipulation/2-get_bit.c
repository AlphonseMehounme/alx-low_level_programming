#include "main.h"

/**
 * get_bit - Get a bit at an index
 * @n: Number to get bit from
 * @index: Index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
	return (-1);
}