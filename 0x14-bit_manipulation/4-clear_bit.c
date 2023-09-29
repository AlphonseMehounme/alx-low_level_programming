#include "main.h"

/**
 * clear_bit - Set bit at index to 0
 * @n: Number
 * @index: Index
 *
 * Return: 1 if successful
 * -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n & (~(1 << index));
	return (1);
}
